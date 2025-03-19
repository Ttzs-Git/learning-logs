#include <QtTest>

#include "GapBuffer.h"
using namespace std;


class TestHarness : public QObject
{
    Q_OBJECT

public:
    TestHarness();
    ~TestHarness();

private slots:
    // part 1 tests
    void insert_at_test_basic();
    void insert_then_delete();
    void edit_at();
    void reserve_test_basic();
    void insert_move_cursor_at_basic();
    void insert_delete_mixed_hard();
    void move_cursor_jump();
    void insert_move_mixed();
    void fill_constructor_test_basic();
    void fill_constructor_edge();

    // Part 2 tests
    void const_test();

    // Part 3 tests
    void insert_operator_test_basic();
    // will add tests for << and comparison operators soon.

};

TestHarness::TestHarness() {
    cout << "Heads up! If you don't see all of your tests here, "
         << "such the skipped ones, your implementation probably caused a crash. " << endl;
            /* No global data used needed */
}

TestHarness::~TestHarness() { /* No global data used needed */}

/*
 * Inserts characters a through g, then uses at to check
 * that the characters are written there.
 *
 * Buffer: [ a b c d e f g ]
 */
void TestHarness::insert_at_test_basic() {
    GapBuffer buf;
    for (char ch = 'a'; ch < 'g'; ch++) {
        buf.insert_at_cursor(ch);
    }
    // buff.debug() are useful if you can't figure out what's the problem.
    for (char ch = 'a'; ch < 'g'; ch++) {
        QVERIFY(ch == buf.at(ch - 'a'));
    }
}

/*
 * Inserts characters a through g, then deletes
 *
 * Buffer: [ a b c d e f g ] -> [ a b c d e ] -> [ a b c d e x y z]
 */
void TestHarness::insert_then_delete() {
    GapBuffer buf;
    for (char ch = 'a'; ch <= 'g'; ch++) {
        buf.insert_at_cursor(ch);
    }
    buf.delete_at_cursor();
    buf.delete_at_cursor();
    buf.insert_at_cursor('x');
    buf.insert_at_cursor('y');
    buf.insert_at_cursor('z');

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
void TestHarness::edit_at() {
    GapBuffer buf;
    buf.insert_at_cursor('a');
    buf.insert_at_cursor('b');
    buf.insert_at_cursor('c');
    QVERIFY(buf.at(0) == 'a');
    QVERIFY(buf.at(1) == 'b');
    QVERIFY(buf.at(2) == 'c');
    buf.at(2) = 'd';
    buf.at(2) = 'e';
    QVERIFY(buf.at(0) == 'a');
    QVERIFY(buf.at(1) == 'b');
    QVERIFY(buf.at(2) == 'e');
}

/*
 * Tests reserve by inserting past the default 10 elements.
 * Uses move and at to verify all elements are correct.
 */
void TestHarness::reserve_test_basic() {
    GapBuffer buf;
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
 * Tests insert and move.
 *
 * Buffer: [ a b c d e f g ]
 */
void TestHarness::insert_move_cursor_at_basic() {
    GapBuffer buf;
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
void TestHarness::insert_delete_mixed_hard() {
    GapBuffer buf;
    for (int i = 0; i < 10; ++i) {
        buf.insert_at_cursor('a' + i);
        buf.insert_at_cursor('a' + i);
        buf.delete_at_cursor();
    }

    for (int i = 0; i < 10; ++i) {
        QVERIFY(buf.at(i) == ('a' + i));
    }
}

/*
 * Checks if move_cursor by large amounts work correctly.
 */
void TestHarness::move_cursor_jump() {
    GapBuffer buf;
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
 * Tests basic use of the operator []
 * Note: remove the QSKIP statement after implementing the operator
 * QSKIP prevents compiler errors even if you haven't implemented it.
 */
void TestHarness::insert_operator_test_basic() {
    QSKIP("This statement skips this test. Remove after implementing operators.");
    GapBuffer buf;
    for (char ch = 'a'; ch < 'g'; ch++) {
        buf.insert_at_cursor(ch);
    }
    // buff.debug() are useful if you can't figure out what's the problem.
    for (char ch = 'a'; ch < 'g'; ch++) {
        QVERIFY(ch == buf[ch - 'a']);
    }
}

/*
 * Interweaves insert and move cursor calls.
 */
void TestHarness::insert_move_mixed() {

    GapBuffer buf;
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
 * Tests the fill constructor by creating GapBuffer of 200 elements
*/
void TestHarness::fill_constructor_test_basic() {
    QSKIP("Remove this statement once you've implemented fill constructor.");
    GapBuffer buf(200, 'c');
    for (int i = 0; i < 200; ++i) {
        QVERIFY(buf.at(i) == 'c');
    }
    QVERIFY(buf.cursor_index() == 200);
}

/*
 * Tests the edge case when you start with 0 or one element.
 * Tests insertion to ensure that is still possible.
 */
void TestHarness::fill_constructor_edge() {
    QSKIP("Remove this statement once you've implemented fill constructor.");
    GapBuffer buf_zero(0, '%');
    QVERIFY(buf_zero.size() == 0);
    QVERIFY(buf_zero.cursor_index() == 0);
    for (int i = 0; i < 20; ++i) {
        buf_zero.insert_at_cursor('a' + i);
    }
    for (int i = 0; i < 20; ++i) {
        QVERIFY(buf_zero.at(i) == ('a' + i));
    }

    GapBuffer buf_one(1, '%');
    QVERIFY(buf_one.size() == 1);
    QVERIFY(buf_one.cursor_index() == 1);
    for (int i = 0; i < 20; ++i) {
        buf_one.insert_at_cursor('a' + i);
    }
    QVERIFY(buf_one.at(0) == '%');
    for (int i = 0; i < 20; ++i) {
        QVERIFY(buf_one.at(i+1) == ('a' + i));
    }
}

void TestHarness::const_test() {
    QSKIP("Remove this statement once you've implemented const functions.");
    const GapBuffer buf(15, 'c');
    QVERIFY(buf.at(10) == 'c');
    QVERIFY(buf.size() == 15);
    QVERIFY(buf.cursor_index() == 15);

}

// We'll add more test cases as we move to later parts.

// insert your own test cases here
// if you want, you can also write couts in the test cases
// to simulate actually using the program

QTEST_APPLESS_MAIN(TestHarness)

#include "tst_testharness.moc"
