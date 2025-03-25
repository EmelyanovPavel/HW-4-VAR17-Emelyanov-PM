////Topic 4 - Recurrent relationships
////17) b1=4, b2=2, bn = (b_n-2/n) + (n^2/b_n-1)
// 
//#include <iostream>
//#include <vector>
//#include <iomanip>
//
//int main()
//{
//    int n;
//    std::cout << "Enter a number of sequence elements: ";
//    std::cin >> n;
//
//    if (n < 1) {
//        std::cout << "The number of elements must be greater than 0\n";
//        return 1;
//    }
//
//    std::vector<double> sequence(n);
//
//    sequence[0] = 4.0;
//    if (n > 1) sequence[1] = 2.0;
//
//    for (int i = 2; i < n; ++i) {
//        sequence[i] = (sequence[i - 2] / (i + 1.0)) + (((i + 1.0) * (i + 1.0)) / sequence[i - 1]);
//    }
//
//    std::cout << "Sequence elements:\n";
//    for (int i = 0; i < n; ++i) {
//        std::cout << "b" << i + 1 << " = " << std::fixed << std::setprecision(4) << sequence[i] << "\n";
//    }
//
//    return 0;
//}