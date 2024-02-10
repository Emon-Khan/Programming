public class CricketScorer {
    private int score;

    public void four() {
        score += 4;
    }

    public void six() {
        score += 6;
    }

    public int getScore() {
        return score;
    }

    public static void main(String[] args) {
        CricketScorer cls = new CricketScorer();
        cls.four();
        cls.six();
        System.out.println(cls.getScore());
    }
}
