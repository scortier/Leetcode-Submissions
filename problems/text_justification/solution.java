// Author :- Siddhant Khare
// Date :- 19 May 2020

class Solution {
    public List<String> fullJustify(String[] words, int maxWidth) {
        List<String> res = new ArrayList<>();
        int len = -1;
        int spaceCount = -1;
        int start = 0;
        for(int i = 0; i < words.length; i++) {
            if(len + words[i].length() + 1 <= maxWidth) {
                len += words[i].length() + 1;
                spaceCount++;
            } else {
                res.add(addLine(words, maxWidth, start, i - 1, len, spaceCount, false));
                len = -1;
                spaceCount = -1;
                start = i;
                i--;
            }
        }
        // Send last line to be added.
        res.add(addLine(words, maxWidth, start, words.length - 1, len, spaceCount, true));
        return res;
     }

    private String addLine(String[] words, int maxWidth, int start, int end, int len, int spaceCount, boolean isLast) {
        StringBuilder str = new StringBuilder();
        int totalSpaces = maxWidth - len;
        totalSpaces += spaceCount;

        int sameSpaces = (isLast || (spaceCount == 0)) ? 0: totalSpaces / spaceCount;
        int extraSpaces = (isLast || (spaceCount == 0)) ? spaceCount : totalSpaces % spaceCount;
        int trailSpaces = (isLast || spaceCount == 0) ? maxWidth - len : 0;

        while(start <= end) {
            str.append(words[start]);

            // Add same spaces after each word
            for(int i = 0; i < sameSpaces && start != end; i++) {
                str.append(" ");
            }

            // Add extra space if it is still not 0.
            if(extraSpaces > 0) {
                str.append(" ");
                extraSpaces--;
            }
            start++;
        }

        // Add trail spaces if we have them
        while(trailSpaces > 0) {
            str.append(" ");
            trailSpaces--;
        }
        return str.toString();
    }
}