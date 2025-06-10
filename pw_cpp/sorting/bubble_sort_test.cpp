#include <cassert>
#include <iostream>
#include <vector>
#include "bubble_sort.cpp"

void test_empty_array() {
    std::vector<int> empty;
    
    // Test all three sorting functions with empty array
    bubble_sort_asc(empty);
    assert(empty.size() == 0 && "Empty array size should remain 0");
    
    bubble_sort_desc(empty);
    assert(empty.size() == 0 && "Empty array size should remain 0");
    
    bubble_sort_big_to_last(empty);
    assert(empty.size() == 0 && "Empty array size should remain 0");
    
    std::cout << "Empty array test passed!\n";
}

void test_single_element() {
    std::vector<int> single = {1};
    std::vector<int> expected = {1};
    
    bubble_sort_asc(single);
    assert(single == expected && "Single element array should remain unchanged");
    
    bubble_sort_desc(single);
    assert(single == expected && "Single element array should remain unchanged");
    
    bubble_sort_big_to_last(single);
    assert(single == expected && "Single element array should remain unchanged");
    
    std::cout << "Single element test passed!\n";
}

void test_already_sorted() {
    std::vector<int> sorted = {1, 2, 3, 4, 5};
    std::vector<int> expected_asc = {1, 2, 3, 4, 5};
    std::vector<int> expected_desc = {5, 4, 3, 2, 1};
    
    // Test ascending sort
    std::vector<int> test_asc = sorted;
    bubble_sort_asc(test_asc);
    assert(test_asc == expected_asc && "Already sorted array (asc) should remain unchanged");
    
    // Test descending sort
    std::vector<int> test_desc = sorted;
    bubble_sort_desc(test_desc);
    assert(test_desc == expected_desc && "Descending sort should reverse sorted array");
    
    // Test big to last
    std::vector<int> test_big = sorted;
    bubble_sort_big_to_last(test_big);
    assert(test_big == expected_asc && "Big to last should maintain ascending order");
    
    std::cout << "Already sorted array test passed!\n";
}

void test_reverse_sorted() {
    std::vector<int> reverse_sorted = {5, 4, 3, 2, 1};
    std::vector<int> expected_asc = {1, 2, 3, 4, 5};
    std::vector<int> expected_desc = {5, 4, 3, 2, 1};
    
    // Test ascending sort
    std::vector<int> test_asc = reverse_sorted;
    bubble_sort_asc(test_asc);
    assert(test_asc == expected_asc && "Reverse sorted should become ascending");
    
    // Test descending sort
    std::vector<int> test_desc = reverse_sorted;
    bubble_sort_desc(test_desc);
    assert(test_desc == expected_desc && "Reverse sorted should remain unchanged for desc sort");
    
    // Test big to last
    std::vector<int> test_big = reverse_sorted;
    bubble_sort_big_to_last(test_big);
    assert(test_big == expected_asc && "Reverse sorted should become ascending");
    
    std::cout << "Reverse sorted array test passed!\n";
}

void test_duplicates() {
    std::vector<int> duplicates = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    std::vector<int> expected_asc = {1, 1, 2, 3, 3, 4, 5, 5, 6, 9};
    std::vector<int> expected_desc = {9, 6, 5, 5, 4, 3, 3, 2, 1, 1};
    
    // Test ascending sort
    std::vector<int> test_asc = duplicates;
    bubble_sort_asc(test_asc);
    assert(test_asc == expected_asc && "Array with duplicates not sorted correctly ascending");
    
    // Test descending sort
    std::vector<int> test_desc = duplicates;
    bubble_sort_desc(test_desc);
    assert(test_desc == expected_desc && "Array with duplicates not sorted correctly descending");
    
    // Test big to last
    std::vector<int> test_big = duplicates;
    bubble_sort_big_to_last(test_big);
    assert(test_big == expected_asc && "Array with duplicates not sorted correctly big to last");
    
    std::cout << "Duplicates array test passed!\n";
}

void test_all_same_elements() {
    std::vector<int> same = {2, 2, 2, 2, 2};
    std::vector<int> expected = {2, 2, 2, 2, 2};
    
    // Test all three sorting functions
    std::vector<int> test_asc = same;
    bubble_sort_asc(test_asc);
    assert(test_asc == expected && "Array with all same elements should remain unchanged");
    
    std::vector<int> test_desc = same;
    bubble_sort_desc(test_desc);
    assert(test_desc == expected && "Array with all same elements should remain unchanged");
    
    std::vector<int> test_big = same;
    bubble_sort_big_to_last(test_big);
    assert(test_big == expected && "Array with all same elements should remain unchanged");
    
    std::cout << "All same elements test passed!\n";
}

void test_negative_numbers() {
    std::vector<int> negative = {-5, -3, -8, -1, -4};
    std::vector<int> expected_asc = {-8, -5, -4, -3, -1};
    std::vector<int> expected_desc = {-1, -3, -4, -5, -8};
    
    // Test ascending sort
    std::vector<int> test_asc = negative;
    bubble_sort_asc(test_asc);
    assert(test_asc == expected_asc && "Negative numbers not sorted correctly ascending");
    
    // Test descending sort
    std::vector<int> test_desc = negative;
    bubble_sort_desc(test_desc);
    assert(test_desc == expected_desc && "Negative numbers not sorted correctly descending");
    
    // Test big to last
    std::vector<int> test_big = negative;
    bubble_sort_big_to_last(test_big);
    assert(test_big == expected_asc && "Negative numbers not sorted correctly big to last");
    
    std::cout << "Negative numbers test passed!\n";
}

int main() {
    try {
        test_empty_array();
        test_single_element();
        test_already_sorted();
        test_reverse_sorted();
        test_duplicates();
        test_all_same_elements();
        test_negative_numbers();
        
        std::cout << "\nAll tests passed successfully!\n";
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Test failed with exception: " << e.what() << std::endl;
        return 1;
    }
} 