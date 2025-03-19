/*
 * CS 106L Assignment 3: Gap Buffer (version 2.21)
 * Test Harness written by Avery Wang (awvry952@stanford.edu)
 * Feb. 28, 2020 (Updated)
 */

#include <QtTest>
#include "GapBuffer.h"
#include <iostream>
#include <vector>
#include <chrono>
#include <sstream>
using namespace std;

// add necessary includes here

class TestCases : public QObject
{
    Q_OBJECT

public:
    TestCases();
    ~TestCases();

private slots:
    void TEST0_warning();

    void TEST1A_insert_at_test_basic();
    void TEST1B_insert_then_delete_basic();
    void TEST1C_edit_at_basic();
    void TEST1D_insert_move_cursor_at_basic();
    void TEST1E_insert_delete_mixed_hard();
    void TEST1F_delete_empty_basic();
    void TEST1G_insert_move_mixed();
    void TEST1H_move_cursor_jump();
    void TEST1I_reserve_basic();
    void TEST1J_reserve_edge();
    void TEST1K_reserve_explicit_stress();

    void TEST2A_const_test();

    void TEST3A_fill_constructor_test_basic();
    void TEST3B_fill_constructor_edge();
    void TEST3C_index_operator_basic();
    void TEST3D_index_operator_const();
    void TEST3E_index_operator_reference_advanced();
    void TEST3F_ostream_insertion_basic();
    void TEST3G_ostream_insertion_edge();
    void TEST3H_ostream_insertion_chain();
    void TEST3I_equality_inequality_operator();
    void TEST3J_comparison_operator();

    // no part 4 tests

    void TEST5A_iterator_basic();
    void TEST5B_iterator_dereference();
    void TEST5C_iterator_bidirectional();
    void TEST5D_iterator_edge();
    void TEST5E_iterator_random_access();
    void TEST5F_iterator_advanced_sort();

    void TEST6A_initializer_list_basic_test();
    void TEST6B_initializer_list_edge_test();
    void TEST6C_copy_constructor_basic();
    void TEST6D_copy_assignment_basic();
    void TEST6E_copy_edge();
    void TEST6F_comparison_operator_set();

    void TEST7A_move_constructor_basic();
    void TEST7B_move_constructor_time();
    void TEST7C_move_assignment_basic();
    void TEST7D_move_assignment_time();
    void TEST7E_move_edge();
    void TEST7F_insert_rvalue_time();
    void TEST7G_insert_lvalue();
    void TEST7H_nested_insert();

    // no part 8 tests

    void TEST9A_emplace_basic();
    void TEST9B_edge();
    void TEST9C_emplace_time();
};

TestCases::TestCases() {
    cout << "Heads up! If you don't see all of your tests here, "
         << "such the skipped ones, your implementation probably caused a crash. " << endl;
            /* No global data used needed */
}

TestCases::~TestCases() { /* No global data used needed */}

void TestCases::TEST0_warning() {
    QFAIL("Read the warnings in the tst_testcases.cpp file, then remove this warning.");
    // Notable issues:
    // 1. because you have an r-value version of insert_at_cursor declared.
    //        the test harness might accidently call that version before
    //        you've implemented it.
    //        We recommend you call insert_at_cursor(element) inside the
    //        r-value version before running the rest of the test harness.
    // 2. turns out the starter code had a massive memory leak.
    //        in the reserve() function, add the following lines
    //        _buffer_size = new_size;         (unchanged)
    //        delete [] _elems;                (inserted)
    //        _elems = std::move(new_elems);   (unchanged)
}

/*
 * Inserts characters a through g, then uses at to check
 * that the characters are written there.
 *
 * Buffer: [ a b c d e f g ]
 */
void TestCases::TEST1A_insert_at_test_basic() {
    QSKIP("Remove this statement once you've templatized your part 3 code.");

    GapBuffer<char> buf;
    for (char ch = 'a'; ch < 'g'; ch++) {
        buf.insert_at_cursor(ch);
    }

    // buf.debug() are useful if you can't figure out what's the problem.
    for (char ch = 'a'; ch < 'g'; ch++) {
        QVERIFY(ch == buf.at(ch - 'a'));
    }
}

/*
 * Inserts characters a through g, then deletes
 *
 * Buffer: [ a b c d e f g ] -> [ a b c d e ] -> [ a b c d e x y z]
 */
void TestCases::TEST1B_insert_then_delete_basic() {
    QSKIP("Remove this statement once you've templatized your part 3 code.");

    GapBuffer<char> buf;
    for (char ch = 'a'; ch <= 'g'; ch++) {
        buf.insert_at_cursor(ch);
    }
    buf.delete_at_cursor();
    buf.delete_at_cursor();
    char x = 'x'; // have to make these l-values so we don't
    char y = 'y'; // accidently call the r-value version of insert_at_cursor.
    char z = 'z';
    buf.insert_at_cursor(x);
    buf.insert_at_cursor(y);
    buf.insert_at_cursor(z);

    for (char ch = 'a'; ch < 'e'; ch++) {
        QVERIFY(ch == buf.at(ch - 'a'));
    }
    QVERIFY(buf.size() == 8);
    QVERIFY('x' == buf.at(5));
    QVERIFY('y' == buf.at(6));
    QVERIFY('z' == buf.at(7));
    QVERIFY(buf.size() == 8);
}

/*
 * Inserts characters abc, then tries ot overwrite c with d, then e
 * Tests
 *
 * Buffer: [ a b c ] -> [ a b e ]
 */
void TestCases::TEST1C_edit_at_basic() {
    QSKIP("Remove this statement once you've templatized your part 3 code.");

    GapBuffer<char> buf;
    char a = 'a';
    char b = 'b';
    char c = 'c';
    buf.insert_at_cursor(a);
    buf.insert_at_cursor(b);
    buf.insert_at_cursor(c);
    QVERIFY(buf.at(0) == a);
    QVERIFY(buf.at(1) == b);
    QVERIFY(buf.at(2) == c);
    buf.at(2) = 'd';
    buf.at(2) = 'e';
    QVERIFY(buf.at(0) == a);
    QVERIFY(buf.at(1) == b);
    QVERIFY(buf.at(2) == 'e');
}

/*
 * Tests insert and move.
 *
 * Buffer: [ a b c d e f g ]
 */
void TestCases::TEST1D_insert_move_cursor_at_basic() {
    QSKIP("Remove this statement once you've templatized your part 3 code.");

    GapBuffer<char> buf;
    for (char ch = 'a'; ch < 'g'; ch++) {
        buf.insert_at_cursor(ch);
    }

    for (char ch = 'f'; ch >= 'a'; ch--) {
        buf.move_cursor(-1);
        QVERIFY(ch == buf.get_at_cursor());
    }
}


/*
 * Verifies correct positioning of cursor after insert and delete
 *
 * Buffer: [ a a ] -> [ a ] -> [ a b ] -> [ a b b ] -> [ a b ] -> etc.
 * End result: [ a b c d e f g h i j ]
 */
void TestCases::TEST1E_insert_delete_mixed_hard() {
    QSKIP("Remove this statement once you've templatized your part 3 code.");

    GapBuffer<char> buf;
    for (int i = 0; i < 10; ++i) {
        char ch = 'a' + i;
        buf.insert_at_cursor(ch);
        buf.insert_at_cursor(ch);
        buf.delete_at_cursor();
    }

    for (int i = 0; i < 10; ++i) {
        char ch = 'a' + i;
        QVERIFY(buf.at(i) == ch);
    }
}


/*
 * Verifies that delete_at_cursor when cursor_index = 0 is a no-op.
 */
void TestCases::TEST1F_delete_empty_basic() {
    QSKIP("Remove this statement once you've templatized your part 3 code.");

    GapBuffer<char> buf;
    for (size_t i = 0; i < 10; ++i) {
        char ch = 'a' + i;
        buf.insert_at_cursor(ch);
    }

    buf.move_cursor(-1*buf.size());
    buf.delete_at_cursor(); // should be a no-op.
    QVERIFY(buf.size() == 10);
    buf.move_cursor(buf.size());
    QVERIFY(!buf.empty());

    for (size_t i = 0; i < 10; ++i) {
        buf.delete_at_cursor();
        QVERIFY(buf.size() == 9-i);
    }
    QVERIFY(buf.empty());
}

/*
 * Interweaves insert and move cursor calls.
 */
void TestCases::TEST1G_insert_move_mixed() {
    QSKIP("Remove this statement once you've templatized your part 3 code.");

    GapBuffer<char> buf;
    for (char ch = 'a'; ch <= 'g'; ch++) {
        buf.insert_at_cursor(ch);
    }
    for (char ch = 'g'; ch > 'a'; ch--) {
        buf.insert_at_cursor(ch);
        buf.move_cursor(-1);
    }
    buf.move_cursor(-1);
}

/*
 * Checks if move_cursor by large amounts work correctly.
 */
void TestCases::TEST1H_move_cursor_jump() {
    QSKIP("Remove this statement once you've templatized your part 3 code.");

    GapBuffer<char> buf;
    for (char ch = 'a'; ch <= 'g'; ch++) {
        buf.insert_at_cursor(ch);
    }
    buf.move_cursor(-1);
    for (char ch = 'g'; ch >= 'c'; ch -= 3) {
        QVERIFY(buf.get_at_cursor() == ch);
        buf.move_cursor(-3);
    }
}

/*
 * Tests reserve by inserting past the default 10 elements.
 * Uses move and at to verify all elements are correct.
 */
void TestCases::TEST1I_reserve_basic() {
    QSKIP("Remove this statement once you've templatized your part 3 code.");

    GapBuffer<char> buf;
    vector<char> vec;
    for (char ch = 'a'; ch <= 'o'; ++ch) {
        buf.insert_at_cursor(ch);
        vec.push_back(ch);
        QVERIFY(buf.size() == vec.size());
    }
    buf.move_cursor(-14);
    for (size_t i = 0; i < 14; i++) {
        QVERIFY(buf.at(i) == vec[i]);
        buf.move_cursor(1);
    }
}

/*
 * Calls reserve explicitly and checks for off-by-one errors.
 */
void TestCases::TEST1J_reserve_edge() {
    QSKIP("Remove this statement once you've templatized your part 3 code.");

    GapBuffer<char> buf;
    char h = 'H';
    for (size_t i = 0; i < 10; ++i) {
        buf.insert_at_cursor(h);
    }

    buf.reserve(0);
    buf.reserve(9);
    char exclaim = '!';
    buf.insert_at_cursor(exclaim);
    buf.reserve(10);
    buf.reserve(11);
    buf.reserve(0);

    QVERIFY(buf.size() == 11);
    QVERIFY(buf.cursor_index() == 11);
}

/*
 * Calls reserve first, then starts begins filling up elements.
 * Fun fact, this test caught a very subtle bug in the starter code
 * (indexing issue inside move_cursor) that only appeared
 * if you called reserve explicitly!
 *
 * Lesson: Write unit tests!
 */
void TestCases::TEST1K_reserve_explicit_stress() {
    QSKIP("Remove this statement once you've templatized your part 3 code.");

    const size_t stress_size = 10000;
    GapBuffer<size_t> buf;
    buf.reserve(stress_size);
    for (size_t i = 0; i < stress_size; ++i) {
        buf.insert_at_cursor(i);
        buf.move_cursor(-1);
    }

    QVERIFY(buf.size() == stress_size);
    for (size_t i = 0; i < stress_size; ++i) {
        QVERIFY(buf.get_at_cursor() == stress_size-1-i);
        buf.move_cursor(1);
    }
}

/*
 * Declares a non-const buffer and verifies that
 * at and get_at_cursor returns references.
 *
 * Then declares a const reference to that buffer
 * and verifies that at and get_at_cursor returns const_references.
 */
void TestCases::TEST2A_const_test() {
    QSKIP("Remove this statement once you've templatized your part 3 code.");

    GapBuffer<int> buf;
    for (size_t i = 0; i < 20; ++i) {
        buf.insert_at_cursor(i);
    }
    buf.move_cursor(-20);
    QVERIFY(buf.get_at_cursor() == 0);
    buf.get_at_cursor() = 100;
    QVERIFY(buf.get_at_cursor() == 100);

    QVERIFY(buf.at(10) == 10);
    buf.at(10) = -10;
    QVERIFY(buf.at(10) == -10);

    const auto& buf_ref = buf;
    QVERIFY(buf_ref.at(10) == -10);
    QVERIFY(buf_ref.size() == 20);
    QVERIFY(buf_ref.empty() == false);
    QVERIFY(buf_ref.get_at_cursor() == 100);
}

/*
 * Tests the fill constructor by creating GapBuffer of 200 elements
*/
void TestCases::TEST3A_fill_constructor_test_basic() {
    QSKIP("Remove this statement once you've templatized your part 3 code.");

    GapBuffer<char> buf(200, 'c');
    for (int i = 0; i < 200; ++i) {
        QVERIFY(buf.at(i) == 'c');
    }
    QVERIFY(buf.cursor_index() == 200);
}

/*
 * Tests the edge case when you start with 0 or one element.
 * Tests insertion to ensure that is still possible.
 */
void TestCases::TEST3B_fill_constructor_edge() {
    QSKIP("Remove this statement once you've templatized your part 3 code.");
    GapBuffer<char> buf_zero(0, '%');
    QVERIFY(buf_zero.size() == 0);
    QVERIFY(buf_zero.cursor_index() == 0);

    for (int i = 0; i < 20; ++i) {
        char ch = 'a' + i;
        buf_zero.insert_at_cursor(ch);
    }

    for (int i = 0; i < 20; ++i) {
        QVERIFY(buf_zero.at(i) == ('a' + i));
    }

    GapBuffer<char> buf_one(1, '%');
    QVERIFY(buf_one.size() == 1);
    QVERIFY(buf_one.cursor_index() == 1);
    for (int i = 0; i < 20; ++i) {
        char ch = 'a' + i;
        buf_one.insert_at_cursor(ch);
    }

    QVERIFY(buf_one.at(0) == '%');
    for (int i = 0; i < 20; ++i) {
        QVERIFY(buf_one.at(i+1) == ('a' + i));
    }

    GapBuffer<char> buf_default(15);
    for (int i = 0; i < 15; ++i) {
        QVERIFY(buf_default[i] == char()); // check equal to default value
    }
}

/*
 * Tests basic use of the operator []
 * Note: remove the //QSKIP statement after implementing the operator
 * QSKIP prevents compiler errors even if you haven't implemented it.
 */
void TestCases::TEST3C_index_operator_basic() {
    QSKIP("Remove this statement once you've templatized your part 3 code.");
    GapBuffer<char> buf;
    for (char ch = 'a'; ch < 'g'; ch++) {
        buf.insert_at_cursor(ch);
    }

    for (char ch = 'a'; ch < 'g'; ch++) {
        QVERIFY(ch == buf[ch - 'a']);
    }
}

/*
 * Does the same test as TEST2A, but with operator[].
 */
void TestCases::TEST3D_index_operator_const() {
    QSKIP("Remove this statement once you've templatized your part 3 code.");

    GapBuffer<int> buf;
    for (size_t i = 0; i < 20; ++i) {
        buf.insert_at_cursor(i);
    }
    buf.move_cursor(-20);
    QVERIFY(buf.get_at_cursor() == 0);
    buf.get_at_cursor() = 100;
    QVERIFY(buf.get_at_cursor() == 100);

    QVERIFY(buf[10] == 10);
    buf.at(10) = -10;
    QVERIFY(buf[10] == -10);

    const auto& buf_ref = buf;
    QVERIFY(buf_ref[10] == -10);
    QVERIFY(buf_ref.size() == 20);
    QVERIFY(buf_ref.empty() == false);
    QVERIFY(buf_ref.get_at_cursor() == 100);
}

/*
 * Verifies the reference returned by operator[] is correct.
 */
void TestCases::TEST3E_index_operator_reference_advanced() {
    QSKIP("Remove this statement once you've templatized your part 3 code.");
    GapBuffer<int> buf;
    for (size_t i = 0; i < 10; ++i) {
        buf.insert_at_cursor(i);
    }
    auto val5 = buf[5];
    auto& val7 = buf[7];
    const auto& val8 = buf[8];
    val5 = -5;
    val7 = -7;
    (void) val8; // suppress warning
    QVERIFY(buf[5] == 5);
    QVERIFY(buf[7] == -7);
    QVERIFY(buf[8] == 8);
}

/*
 * Verifies that operator << for ostreams is correct.
 */
void TestCases::TEST3F_ostream_insertion_basic() {
    QSKIP("Remove this statement once you've templatized your part 3 code.");
    GapBuffer<int> buf;
    for (size_t i = 1; i <= 5; ++i) {
        buf.insert_at_cursor(i);
    }

    std::ostringstream oss1;
    oss1 << buf;
    QVERIFY(oss1.str() == "{1, 2, 3, 4, 5^}");
    buf.move_cursor(-3);

    std::ostringstream oss2;
    oss2 << buf;
    QVERIFY(oss2.str() == "{1, 2, ^3, 4, 5}" || oss2.str() == "{1, 2,^3, 4, 5}");

    buf.move_cursor(-2);

    std::ostringstream oss3;
    oss3 << buf;
    QVERIFY(oss3.str() == "{^1, 2, 3, 4, 5}");

}

/*
 * Verifies a few edge cases for operator<<.
 */
void TestCases::TEST3G_ostream_insertion_edge() {
    QSKIP("Remove this statement once you've templatized your part 3 code.");

    GapBuffer<int> new_buf;
    std::ostringstream oss4;
    oss4 << new_buf;
    QVERIFY(oss4.str() == "{^}");

    int i = 1;
    new_buf.insert_at_cursor(i);
    std::ostringstream oss5;
    oss5 << new_buf;
    QVERIFY(oss5.str() == "{1^}");

    new_buf.move_cursor(-1);
    std::ostringstream oss6;
    oss6 << new_buf;
    QVERIFY(oss6.str() == "{^1}");

    new_buf.move_cursor(1);
    int j = 2;
    new_buf.insert_at_cursor(j);
    std::ostringstream oss7;
    oss7 << new_buf;
    QVERIFY(oss7.str() == "{1, 2^}");

    new_buf.move_cursor(-1);
    std::ostringstream oss8;
    oss8 << new_buf;
    QVERIFY(oss8.str() == "{1, ^2}" || oss8.str() == "{1,^2}"); // not strict on spaces before ^
}

/*
 * Verifies that the operator << can be chained.
 */
void TestCases::TEST3H_ostream_insertion_chain() {
    QSKIP("Remove this statement once you've templatized your part 3 code.");
    GapBuffer<int> new_buf;
    std::ostringstream oss4;
    oss4 << new_buf << new_buf << new_buf;
    QVERIFY(oss4.str() == "{^}{^}{^}");
}

/*
 * Verifies operator== and operator!= correctly implemented.
 */
void TestCases::TEST3I_equality_inequality_operator() {
    QSKIP("Remove this statement once you've templatized your part 3 code.");
    GapBuffer<char> buf1;
    GapBuffer<char> buf2;
    GapBuffer<char> buf3;
    GapBuffer<char> buf4;
    GapBuffer<char> buf5;
    GapBuffer<char> buf6;
    string avery = "avery";
    string anna = "anna";
    string ali = "ali";
    string a = "a";
    string empty = "";

    // Augh why did I put the initializer list constructor in part 6.
    for (const auto& ch : avery) buf1.insert_at_cursor(ch);
    for (const auto& ch : anna) buf2.insert_at_cursor(ch);
    for (const auto& ch : ali) buf3.insert_at_cursor(ch);
    for (const auto& ch : a) buf4.insert_at_cursor(ch);
    for (const auto& ch : empty) buf5.insert_at_cursor(ch);
    for (const auto& ch : avery) buf6.insert_at_cursor(ch);

    QVERIFY(buf1 == buf6);
    QVERIFY(buf1 != buf2);
    QVERIFY(buf1 != buf3);
    QVERIFY(buf1 != buf4);
    QVERIFY(buf1 != buf5);
    QVERIFY(buf2 != buf3);
    QVERIFY(buf5 != buf6);
    QVERIFY(buf1 == buf1);
    QVERIFY(buf2 == buf2);
    QVERIFY(buf5 == buf5);
}

/*
 * Verifies comparison operators (<, >, <=, >=) correctly implemented.
 */
void TestCases::TEST3J_comparison_operator() {
    QSKIP("Remove this statement once you've templatized your part 3 code.");
    GapBuffer<char> buf1;
    GapBuffer<char> buf2;
    GapBuffer<char> buf3;
    GapBuffer<char> buf4;
    GapBuffer<char> buf5;
    GapBuffer<char> buf6;
    string avery = "avery";
    string anna = "anna";
    string ali = "ali";
    string a = "a";
    string empty = "";

    // Augh why did I put the initializer list constructor in part 6.
    for (const auto& ch : avery) buf1.insert_at_cursor(ch);
    for (const auto& ch : anna) buf2.insert_at_cursor(ch);
    for (const auto& ch : ali) buf3.insert_at_cursor(ch);
    for (const auto& ch : a) buf4.insert_at_cursor(ch);
    for (const auto& ch : empty) buf5.insert_at_cursor(ch);
    for (const auto& ch : avery) buf6.insert_at_cursor(ch);


    QVERIFY(!(buf1 < buf6));
    QVERIFY(!(buf1 > buf6));
    QVERIFY(buf1 <= buf6);
    QVERIFY(buf1 > buf2);
    QVERIFY(buf1 > buf3);
    QVERIFY(buf1 > buf4);
    QVERIFY(buf1 > buf5);
    QVERIFY(buf2 > buf3);
    QVERIFY(buf5 <= buf6);
    QVERIFY(!(buf1 > buf1) && !(buf1 < buf1));
    QVERIFY(!(buf2 > buf2) && !(buf2 < buf2));
    QVERIFY(!(buf5 > buf5) && !(buf5 < buf5));
}



/*
 * Tests the function of the for-each loop, which uses your basic iterator operators.
 */
void TestCases::TEST5A_iterator_basic() {
    QSKIP("Remove this statement once you've finished implementing iterators.");
    vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    GapBuffer<int> buf;
    for (int val : vec) {
        buf.insert_at_cursor(val);
    }

    size_t current_index = 0;
    for (int val : buf) {
        QVERIFY(val == vec[current_index++]);
    }

    // you didn't go out of bounds, did you?
    QVERIFY(current_index == vec.size());
}

/*
 * Tests that the dereference operator (*) is
 * returning a reference to the element, so changing
 * the element when looping by reference actually changes the element.
 */
void TestCases::TEST5B_iterator_dereference() {
    QSKIP("Remove this statement once you've finished implementing iterators.");

    vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    GapBuffer<int> buf;
    for (int val : vec) {
        buf.insert_at_cursor(val);
    }

    for (int& val : buf) {
        val = -1; // should change all values to -1
    }

    for (int val : buf) {
        QVERIFY(val == -1);
    }
}

/*
 * Tests a while loop of an iterator moving backwards from the cursor.
 */
void TestCases::TEST5C_iterator_bidirectional() {
    QSKIP("Remove this statement once you've finished implementing iterators.");

    vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    GapBuffer<int> buf;
    for (int val : vec) {
        buf.insert_at_cursor(val);
    }

    buf.move_cursor(-1);
    size_t current_index = 8;

    auto iter = buf.cursor();
    while (iter != buf.begin()) {
        --iter;
        QVERIFY(*iter == vec[current_index--]);
    }
    QVERIFY(*iter == vec[0]);
}



/*
 * Tests the operators specific to random-access iterators:
 * +, -, +=, and -=, which you wrote.
 */
void TestCases::TEST5D_iterator_edge() {
    QSKIP("Remove this statement once you've implemented iterators.");

    GapBuffer<int> empty;
    QVERIFY(empty.begin() == empty.end());
    QVERIFY(empty.begin() == empty.cursor());

    for (int val : empty) {
        (void) val;
        QFAIL("This should never run!");
    }
}

/*
 * Tests the operators specific to random-access iterators:
 * +, -, +=, and -=, which youwrote.
 */
void TestCases::TEST5E_iterator_random_access() {
    QSKIP("Remove this statement once you've implemented iterators.");

    vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    GapBuffer<int> buf;
    for (int val : vec) {
        buf.insert_at_cursor(val);
    }

    QVERIFY(buf.cursor() == buf.end()); // cursor points to after 12 (end)
    buf.move_cursor(-6); // cursor points to 7
    auto iter = buf.cursor(); // points to 7
    QVERIFY(*iter == 7);
    auto j = iter - 3; // points to 4
    QVERIFY(*j == 4);
    auto k = iter + 3; // points to 10
    auto m = 3 + iter; // tests symmetry
    QVERIFY(*k == 10);
    QVERIFY(*m == 10);
    j += 2; // points to 6
    QVERIFY(*j == 6);
    k -= 2; // points to 8
    QVERIFY(*k == 8);
}

/*
 * If you implemented all the operators correctly...std::sort magically works!
 *
 * Wait...you say in disbelief. std::sort knows can sort even with the gap?
 * YES!!! - your iterators abstract away the containers, and the algorithms
 * work purely on the iterators.
 */
void TestCases::TEST5F_iterator_advanced_sort() {
    QSKIP("Remove this statement once you've implemented iterators.");

    vector<int> vec{5, 2, 6, 3, 9, 0, 1, 8, 4, 7};
    GapBuffer<int> buf;
    for (int val : vec) {
        buf.insert_at_cursor(val);
    }

    std::sort(vec.begin(), vec.end());
    //QFAIL("Uncomment the line below to start the starter code.");
    std::sort(buf.begin(), buf.end());

    // /* Mind-blown */
    size_t current_index = 0;
    for (int val : buf) {
        QVERIFY(val == vec[current_index++]);
    }
    // you didn't go out of bounds, did you?
    QVERIFY(current_index == vec.size());
}

/*
 * Tests the initializer_list constructor.
 */
void TestCases::TEST6A_initializer_list_basic_test() {
    QSKIP("Remove this statement once you've finished initializer list.");

    GapBuffer<int> buf{1, 2, 3, 4, 5};
    for (int i = 0; i < 5; ++i) {
        QVERIFY(buf[i] == i+1);
    }
    QVERIFY(buf.cursor_index() == buf.size());
}

/*
 * Tests an edge case for the initializer_list constructor.
 */
void TestCases::TEST6B_initializer_list_edge_test() {
    QSKIP("Remove this statement once you've finished initializer list.");

    GapBuffer<int> buf_empty{};
    QVERIFY(buf_empty.size() == 0);
    QVERIFY(buf_empty.cursor_index() == 0);

    GapBuffer<int> buf{0};
    QVERIFY(buf.size() == 1);

    for (int i = 1; i < 20; ++i) {
        buf.insert_at_cursor(i);
    }

    for (int i = 0; i < 20; ++i) {
        QVERIFY(buf[i] == i);
    }
    QVERIFY(buf.cursor_index() == buf.size());
}

/*
 * Tests basic behavior for the copy constructor.
 */
void TestCases::TEST6C_copy_constructor_basic() {
    QSKIP("Remove this statement once you've implemented copy constructor.");

    GapBuffer<int> buf1{1, 2, 3};
    GapBuffer<int> buf2 = buf1; // constructor

    // Make sure everything is copied correctly
    QVERIFY(buf2[0] == 1);
    QVERIFY(buf2[1] == 2);
    QVERIFY(buf2[2] == 3);
    QVERIFY(buf1.cursor_index() == buf2.cursor_index());

    // Try changing buf2 - it should be a deep copy
    buf2[0] = 5;
    buf2[1] = 6;
    buf2[2] = 7;
    int eight = 8;
    buf2.insert_at_cursor(eight);

    // buf1 should remain unchanged
    QVERIFY(buf1[0] == 1);
    QVERIFY(buf1[1] == 2);
    QVERIFY(buf1[2] == 3);
    QVERIFY(buf1.cursor_index() == 3);
}

/*
 * Tests basic behavior for the copy assignment operator.
 */
void TestCases::TEST6D_copy_assignment_basic() {
    QSKIP("Remove this statement once you've implemented copy assignment.");

    GapBuffer<int> buf1{1, 2, 3};
    GapBuffer<int> buf2{4};
    buf2 = buf1; // assignment

    // Make sure everything is copied correctly
    QVERIFY(buf2[0] == 1);
    QVERIFY(buf2[1] == 2);
    QVERIFY(buf2[2] == 3);

    // Try changing buf2 - it should be a deep copy
    buf2[0] = 5;
    buf2[1] = 6;
    buf2[2] = 7;

    // buf1 should remain unchanged
    QVERIFY(buf1[0] == 1);
    QVERIFY(buf1[1] == 2);
    QVERIFY(buf1[2] == 3);
}

/*
 * Tests copy constructor and assignment operator for a few edge cases.
 */
void TestCases::TEST6E_copy_edge() {
    QSKIP("Remove this statement once you've implemented copy operations.");

    GapBuffer<int> buf1{1};
    GapBuffer<int> buf2 = buf1;
    int two = 2;
    buf1.insert_at_cursor(two);
    QVERIFY(buf1[0] == 1);
    QVERIFY(buf1[1] == 2);
    QVERIFY(buf2[0] == 1);
    QVERIFY(buf2.size() == 1);

    GapBuffer<int> buf3;
    GapBuffer<int> buf4(buf3);
    int four = 4;
    buf4.insert_at_cursor(four);

    // Try some awful things with assignment.
    buf1 = buf1;
    QVERIFY(buf1.size() == 2);
    buf2 = (buf2 = buf2) = buf2;
    QVERIFY(buf2.size() == 1);
    buf3 = (buf4 = buf3) = buf4;
    QVERIFY(buf3.size() == 0);
    QVERIFY(buf4.size() == 0);
    (buf1 = buf1 = buf1 = buf1) = (buf1 = buf1) = buf1;
    QVERIFY(buf1.size() == 2);
    // still alive? good work!
}

/*
 * Tests the comparison operators by placing buffers into a set
 * which requires the comparison operators correctly implemented.
 *
 * Note: originally we put this test case in part 3.
 * Why did we move it here?
 *
 * Putting things into a set requires overloading the comparison
 * operators, which was why we wanted to put the test in part 3.
 * However, it turns out that when you insert something into
 * a set, you need to create a copy of that object.
 * You do that in the copy constructor.
 *
 * That's the reason if you try running this test after only
 * completing part 3, you get a double free error.
 */
void TestCases::TEST6F_comparison_operator_set() {
    QSKIP("Remove this statement once you've implemented copy operations.");

    // finally I can use initializer lists here.
    GapBuffer<char> buf1{'a','v','e','r','y'};
    GapBuffer<char> buf2{'a','n','n','a'};
    GapBuffer<char> buf3{'a','l','i'};
    GapBuffer<char> buf4{'a'};
    GapBuffer<char> buf5{};
    GapBuffer<char> buf6{'a','v','e','r','y'};

    std::set<GapBuffer<char>> bufs {buf1, buf2, buf3, buf4, buf5, buf6};
    auto iter = bufs.begin();
    QVERIFY(*iter++ == buf5);
    QVERIFY(*iter++ == buf4);
    QVERIFY(*iter++ == buf3);
    QVERIFY(*iter++ == buf2);
    QVERIFY(*iter++ == buf1);
    QVERIFY(iter == bufs.end());
    QVERIFY(bufs.size() == 5);

}

/*
 * Tests basic behavior of the move constructor.
 */
void TestCases::TEST7A_move_constructor_basic() {
    QSKIP("Remove this statement once you've implemented move constructor.");

    GapBuffer<int> buf1(10, 1);
    GapBuffer<int> buf2 = std::move(buf1); // constructor

    // Make sure everything is copied correctly
    for (size_t i = 0; i < buf1.size(); ++i) {
        QVERIFY(buf2[i] == 1);
    }
}

/*
 * Tests the efficiency of the move constructor.
 * i.e. you should not be copying any elements.
 */
void TestCases::TEST7B_move_constructor_time() {
    QSKIP("Remove this statement once you've implemented move constructor.");

    GapBuffer<int> buf3(10000, 1);
    auto start = std::chrono::high_resolution_clock::now();

    GapBuffer<int> buf4 = std::move(buf3);
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    QVERIFY2(elapsed.count() < 10, "Move constructor must be instantaneous");

    for (size_t i = 0; i < buf4.size(); ++i) {
        QVERIFY(buf4[i] == 1); // just to make sure you didn't cheat :)
    }
}

/*
 * Tests the basic behavior the move assignment operator.
 */
void TestCases::TEST7C_move_assignment_basic() {
    QSKIP("Remove this statement once you've implemented move assignment.");

    GapBuffer<int> buf1(10, 1);
    GapBuffer<int> buf2;
    buf1.move_cursor(-3);
    buf2 = std::move(buf1); // assignment

    // Make sure everything is copied correctly
    for (size_t i = 0; i < buf1.size(); ++i) {
        QVERIFY(buf2[i] == 1);
    }
    QVERIFY(buf2.cursor_index() == 10-3);

}

/*
 * Tests the efficiency of the move assignment operator.
 * i.e. you should not be copying any elements.
 */
void TestCases::TEST7D_move_assignment_time() {
    QSKIP("Remove this statement once you've implemented move assignment.");

    GapBuffer<int> buf3(10000, 1);
    auto start = std::chrono::high_resolution_clock::now();
    GapBuffer<int> buf4;
    buf4 = std::move(buf3);
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    QVERIFY2(elapsed.count() < 10, "Move assignment must be instantaneous");

    for (size_t i = 0; i < buf4.size(); ++i) {
        QVERIFY(buf4[i] == 1); // just to make sure you didn't cheat :)
    }
}

/*
 * Tests the move constructor and move assignment operator
 * in a few edge cases.
 */
void TestCases::TEST7E_move_edge() {
    QSKIP("Remove this statement once you've implemented move operations.");

    GapBuffer<int> buf1{1};
    GapBuffer<int> buf2 = std::move(buf1);
    int two = 2;
    buf2.insert_at_cursor(two);
    QVERIFY(buf2[0] == 1);
    QVERIFY(buf2[1] == 2);
    QVERIFY(buf2.size() == 2);
    buf1 = std::move(buf2);
    QVERIFY(buf1[0] == 1);
    QVERIFY(buf1[1] == 2);
    QVERIFY(buf1.size() == 2);

    GapBuffer<int> buf3;
    GapBuffer<int> buf4(std::move(buf3));
    int four = 4;
    buf4.insert_at_cursor(four);

    // Try some awful things with assignment.
    buf4 = std::move(buf4);
    QVERIFY(buf4.size() == 1);
    QVERIFY(buf4[0] == 4);

    // move, then move back
    buf4 = std::move(buf3 = std::move(buf4));
    QVERIFY(buf4.size() == 1);
    QVERIFY(buf4[0] == 4);
    // still alive? good work!
}

/*
 * Tests the insert_at_cursor function with an r-value.
 * Also checks for the efficiency (no copying!)
 */
void TestCases::TEST7F_insert_rvalue_time() {
    QSKIP("Remove this statement once you've implemented the r-value insert_at_cursor.");

    GapBuffer<std::vector<int>> buf;
    GapBuffer<std::vector<int>> answer;
    vector<int> vec(10000, 1);
    answer.insert_at_cursor(vec);
    auto start = std::chrono::high_resolution_clock::now();
    buf.insert_at_cursor(std::move(vec));
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    QVERIFY2(elapsed.count() < 10, "inserting an r-value must be instantaneous");
    QVERIFY(buf == answer); // elements should still be the same
}

/*
 * Tests that insert_at_cursor still corrects correctly for an l-value.
 */
void TestCases::TEST7G_insert_lvalue() {
    QSKIP("Remove this statement once you've implemented the r-value insert_at_cursor.");

    GapBuffer<std::vector<int>> buf;
    vector<int> vec(10000, 42);
    vector<int> answer(10000, 42);
    buf.insert_at_cursor(vec);
    QVERIFY(vec == answer); // vec better still be intact
}

/*
 * A stress test for r-value insert_at_cursor.
 * Calls move constructor, which in turn must move assign
 * different elements within the nested class.
 */
void TestCases::TEST7H_nested_insert() {
    QSKIP("Remove this statement once you've implemented the r-value insert_at_cursor.");

    GapBuffer<GapBuffer<int>> buf;
    GapBuffer<int> toAdd{1, 2, 3};
    buf.insert_at_cursor(toAdd);
    GapBuffer<int> buf2(10000, 1);
    buf.insert_at_cursor(std::move(buf2));
    GapBuffer<int> answer{1, 2, 3};
    GapBuffer<int> answer2(10000, 1);

    QVERIFY(buf[0] == answer);
    QVERIFY(buf[1] == answer2);
    QVERIFY(buf.size() == 2);
}

/*
 * Verifies basic functionality of emplace
 */
void TestCases::TEST9A_emplace_basic() {
    QSKIP("Optional: remove this statement once you've implemented emplace_at_cursor.");
    GapBuffer<std::vector<int>> buf;
    buf.emplace_at_cursor(10, 3);
    QVERIFY(buf[0] == vector<int>(10, 3));

    GapBuffer<GapBuffer<int>> buf2;
    buf2.emplace_at_cursor(42, 24);
    QVERIFY(buf2[0] == GapBuffer<int>(42, 24));
}

/*
 * Verifies edge case when parameter back is empty.
 */
void TestCases::TEST9B_edge() {
    QSKIP("Optional: remove this statement once you've implemented emplace_at_cursor.");
    GapBuffer<std::string> buf;
    buf.emplace_at_cursor();
    QVERIFY(buf.size() == 1);
    QVERIFY(buf[0] == "");
}


/*
 * Tests that emplace_at_cursor is much faster than insert_at_cursor
 * Scenario: which one is faster?
 *     (1) Create a vector<vector<int>> vec_three = {vec, vec, vec}, then insert into GapBuffer
 *     (2) Pass (3, vec) to the fill constructor of vector<vector<int>>
 * Notice that (1) creates vec_three, then insert creates a copy -> 2 nested vectors.
 * While (2) only creates 1 nested vector.
 */
void TestCases::TEST9C_emplace_time() {
    QSKIP("Optional: remove this statement once you've implemented emplace_at_cursor.");
    GapBuffer<std::vector<std::vector<int>>> buf;
    vector<int> vec(100000, 3);
    auto start_insert = std::chrono::high_resolution_clock::now();
    for (size_t i = 0; i < 10; ++i) {
        std::vector<std::vector<int>> vec_three = {vec, vec, vec};
        buf.insert_at_cursor(vec_three);
    }
    auto end_insert = std::chrono::high_resolution_clock::now();
    auto elapsed_insert = std::chrono::duration_cast<std::chrono::microseconds>
            (end_insert - start_insert);


    GapBuffer<std::vector<int>> buf2;
    auto start_emplace = std::chrono::high_resolution_clock::now();
    for (size_t i = 0; i < 10; ++i) {
        buf.emplace_at_cursor(3, vec);
    }
    auto end_emplace = std::chrono::high_resolution_clock::now();
    auto elapsed_emplace = std::chrono::duration_cast<std::chrono::microseconds>
            (end_emplace - start_emplace);

    QVERIFY2(elapsed_insert.count() > 3*elapsed_emplace.count(),
             "Emplacing should be much faster than inserting");
}



QTEST_APPLESS_MAIN(TestCases)

#include "tst_testcases.moc"
