class Solution {

    public int[][] floodFill(int[][] image, int sr, int sc, int newColor) {
        if (image.length == 0 || image[0].length == 0) {
            return image;
        }
        int oldColor = image[sr][sc];
        floodfill(image, sr, sc, oldColor, newColor);
        return image;
    }

    public void floodfill(int[][] image, int sr, int sc, int oldColor, int newColor) {
        if (sr < 0 || sr >= image.length ||
            sc < 0 || sc >= image[0].length ||
            image[sr][sc] != oldColor ||
            image[sr][sc] == newColor) {
            return;
        }
        image[sr][sc] = newColor;
        floodfill(image, sr + 1, sc, oldColor, newColor);
        floodfill(image, sr - 1, sc, oldColor, newColor);
        floodfill(image, sr, sc + 1, oldColor, newColor);
        floodfill(image, sr, sc - 1, oldColor, newColor);
        return;
    }
}