#include <iostream>
#include <fstream>
#include <unordered_set>

using std::cout;            using std::endl;
using std::string;          using std::unordered_set;

/*
 * Note that you have to pass in the file as a single string
 * into the findWikiLinks function!
 * So we have to turn the passed-in file into a single string...
 * does that sound familiar at all?
 */
unordered_set<string> findWikiLinks(const string& page_html) {
    // TODO: delete this return statement and implement
    // the function!
    return {};
}

int main() {
    /* Note if your file reading isn't working, please go to the
     * projects tab on the panel on the left, and in the run section,
     * uncheck the "Run in terminal" box and re-check it. This
     * should fix things.
     */

    cout << "Enter a file name: ";
    string filename;
    getline(std::cin, filename);

    // TODO:
    // - create a filestream from the filename, and convert
    //   it into a single string of data
    // - findWikiLinks
    // - print out the links you found, and use the provided
    //   test files under "Other files/res" to check whether
    //   your findWikiLinks function is working correctly!
    //
    // You got this!

    // Write code here

}
