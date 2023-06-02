package questionNO2;

public class rubberSpikePriceDecorator extends priceDecorator {

    public rubberSpikePriceDecorator(price decoratedPrice) {
        super(decoratedPrice);
    }

    @Override
    public int add() {
        return decoratedPrice.add() + rubberSpikePrice();
    }

    private int rubberSpikePrice() {
        int p = decoratedPrice.add();
        return (p / 100) * 6;
    }

}
