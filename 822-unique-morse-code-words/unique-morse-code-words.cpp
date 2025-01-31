#include <iostream>
#include <vector>
#include <unordered_set>

class Solution {
public:
    int uniqueMorseRepresentations(std::vector<std::string>& words) {
        // Define the Morse code mapping for each letter
        std::vector<std::string> morseCode = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", 
                                               ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", 
                                               ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};

        std::unordered_set<std::string> uniqueTransformations; // Set to store unique transformations

        // Transform each word into its Morse code representation
        for (const auto& word : words) {
            std::string morseRepresentation;
            for (char letter : word) {
                morseRepresentation += morseCode[letter - 'a']; // Convert letter to Morse code
            }
            uniqueTransformations.insert(morseRepresentation); // Add to set
        }

        return uniqueTransformations.size(); // Return the count of unique transformations
    }
};
