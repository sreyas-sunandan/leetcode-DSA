class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> result;
        int i = 0;
        
        while (i < words.size()) {
            int lineLength = 0;
            int start = i;
            
            
            while (i < words.size() && lineLength + words[i].length() + (i - start) <= maxWidth) {
                lineLength += words[i].length();
                i++;
            }
            
            string line;
            int wordCount = i - start;
            int spaceCount = maxWidth - lineLength;
            
          
            if (i == words.size() || wordCount == 1) {
                for (int j = start; j < i; j++) {
                    line += words[j];
                    if (j < i - 1) line += ' ';
                }
                line += string(maxWidth - line.length(), ' '); 
            } else {
                
                int spacesBetweenWords = spaceCount / (wordCount - 1);
                int extraSpaces = spaceCount % (wordCount - 1);
                
                for (int j = start; j < i; j++) {
                    line += words[j];
                    if (j < i - 1) {
                        line += string(spacesBetweenWords + (extraSpaces > 0 ? 1 : 0), ' ');
                        extraSpaces--;
                    }
                }
            }
            
            result.push_back(line);
        }
        
        return result;
    }
};
