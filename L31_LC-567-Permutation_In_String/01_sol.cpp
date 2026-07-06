#include <iostream>
using namespace std;

// Helper function to check if two frequency arrays are identical
bool isFrequencySame(int freq1[], int freq2[])
{
    for (int i = 0; i < 26; i++)
    {
        if (freq1[i] != freq2[i])
        {
            return false; // Mismatch found
        }
    }
    return true; // All 26 characters match
}

bool checkInclusion(string s1, string s2)
{
    int freq[26] = {0}; // Original frequency array for s1

    // Step 1: Count s1 character frequencies
    for (int i = 0; i < s1.length(); i++)
    {
        freq[s1[i] - 'a']++;
    }

    int windowSize = s1.length();

    // Step 2: Slide the window across s2
    for (int i = 0; i < s2.length(); i++)
    {
        int windowIdx = 0;
        int idx = i;
        int windowFreq[26] = {0}; // Resets to zero every time the outer loop moves

        // Populate the window's frequencies safely
        while (windowIdx < windowSize && idx < s2.length())
        {
            windowFreq[s2[idx] - 'a']++;
            windowIdx++;
            idx++;
        }

        // If window matches s1's signature, permutation exists
        if (isFrequencySame(freq, windowFreq))
        {
            return true;
        }
    }
    return false;
}

int main()
{

    return 0;
}