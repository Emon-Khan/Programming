package questionNO2;

public class mainClass {

    public static void main(String[] args) {
        price adidas = new Adidas();
        price stillSpikeAdidas = new stillSpikePriceDecorator(new Adidas());
        price rubberSpikeAdidas = new rubberSpikePriceDecorator(new Adidas());
        int adidasPrice = adidas.add();
        System.out.println(adidasPrice);
        int adidasPriceWhichGotStillSpike = stillSpikeAdidas.add();
        System.out.println(adidasPriceWhichGotStillSpike);
        int adidasPriceWhichGotRubberSpike = rubberSpikeAdidas.add();
        System.out.println(adidasPriceWhichGotRubberSpike);

        /*price nike = new Nike();
        price stillSpikeNike = new stillSpikePriceDecorator(new Nike());
        price rubberSpikeNike =  new rubberSpikePriceDecorator(new Nike());
        int nikePrice = nike.add();
        System.out.println(nikePrice);
        int nikePriceWhichGotStillSpike = stillSpikeNike.add();
        System.out.println(nikePriceWhichGotStillSpike);
        int nikePriceWhichGotRubberSpike = rubberSpikeNike.add();
        System.out.println(nikePriceWhichGotRubberSpike);
        
        price reebok = new Reebok();
        price stillSpikeReebok = new stillSpikePriceDecorator(new Reebok());
        int reebokPrice = reebok.add();
        System.out.println(reebokPrice);
        int reebokPriceWhichGotStillSpike = stillSpikeReebok.add();
        System.out.println(reebokPriceWhichGotStillSpike);*/
    }
}
