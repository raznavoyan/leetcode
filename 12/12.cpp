class Solution {
public:
    string intToRoman(int num) {
        string ones[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string tens[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hundreds[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        string thousands[]= {"", "M", "MM", "MMM"};
        return thousands[num / 1000] + hundreds[(num % 1000) / 100] + tens[(num % 100) / 10] + ones[num % 10];
    }
};


// class Solution {
// public:
//     string intToRoman(int num) {
//         // Define the mappings of integers to Roman numerals
//         std::vector<std::pair<int, std::string>> values = {
//             {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"},
//             {90, "XC"},  {50, "L"},   {40, "XL"}, {10, "X"},   {9, "IX"},
//             {5, "V"},    {4, "IV"},   {1, "I"}};

//         std::string result;

//         // Loop through the values and construct the Roman numeral string
//         for (const auto& pair : values) {
//             while (num >= pair.first) {
//                 result += pair.second;
//                 num -= pair.first;
//             }
//         }

//         return result;
//     }
// };
