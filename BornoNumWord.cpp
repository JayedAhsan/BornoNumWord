/*MIT License
Copyright (c) 2024 Jayed Ahsan Saad
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include <iostream>
#include <string>

const std::string numbers[] = { "শূন্য", "এক", "দুই", "তিন", "চার", "পাঁচ", "ছয়",
    "সাত", "আট", "নয়", "দশ", "এগারো", "বারো", "তেরো", "চৌদ্দ", "পনেরো", "ষোল",
    "সতেরো", "আঠারো", "ঊনিশ", "বিশ", "একুশ", "বাইশ", "তেইশ", "চব্বিশ", "পঁচিশ",
    "ছাব্বিশ", "সাতাশ", "আঠাশ", "উনত্রিশ", "ত্রিশ", "একত্রিশ", "বত্রিশ", "তেত্রিশ",
    "চৌত্রিশ", "পঁয়ত্রিশ", "ছত্রিশ", "সাতত্রিশ", "আটত্রিশ", "উনচল্লিশ", "চল্লিশ",
    "একচল্লিশ", "বিয়াল্লিশ", "তেতাল্লিশ", "চুয়াল্লিশ", "পঁয়তাল্লিশ", "ছেচল্লিশ",
    "সাতচল্লিশ", "আটচল্লিশ", "উনপঞ্চাশ", "পঞ্চাশ", "একান্ন", "বায়ান্ন", "তিপ্পান্ন",
    "চুয়ান্ন", "পঞ্চান্ন", "ছাপ্পান্ন", "সাতান্ন", "আটান্ন", "উনষাট", "ষাট", "একষট্টি",
    "বাষট্টি", "তেষট্টি", "চৌষট্টি", "পঁয়ষট্টি", "ছেষট্টি", "সাতষট্টি", "আটষট্টি",
    "উনসত্তর", "সত্তর", "একাত্তর", "বাহাত্তর", "তিয়াত্তর", "চুয়াত্তর", "পঁচাত্তর",
    "ছিয়াত্তর", "সাতাত্তর", "আটাত্তর", "উনআশি", "আশি", "একাশি", "বিরাশি", "তিরাশি",
    "চুরাশি", "পঁচাশি", "ছিয়াশি", "সাতাশি", "আটাশি", "উননব্বই", "নব্বই", "একানব্বই",
    "বিরানব্বই", "তিরানব্বই", "চুরানব্বই", "পঁচানব্বই", "ছিয়ানব্বই", "সাতানব্বই",
    "আটানব্বই", "নিরানব্বই" };

std::string bornoNumWord(long long number) {
    if (number < 0) {
        return "";
    } else if (number < 100) {
        return numbers[number];
    } else {
        std::string result = "";
        long long num[] = {10000000, 100000, 1000, 100};
        std::string num_bn[] = {"কোটি", "লক্ষ", "হাজার", "শত"};

        for (int i = 0; i < 4; i++) {
            if (number >= num[i]) {
                result += bornoNumWord(number / num[i]) + " " + num_bn[i] + " ";
                number %= num[i];
            }
        }

        if (number > 0) {
            result += numbers[number];
        }

        return result;
    }
}

int main() {
    long long num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << bornoNumWord(num) << std::endl;
    return 0;
}