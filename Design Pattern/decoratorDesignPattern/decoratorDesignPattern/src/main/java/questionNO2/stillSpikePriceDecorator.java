package questionNO2;

public class stillSpikePriceDecorator extends priceDecorator {

    public stillSpikePriceDecorator(price decoratedPrice) {
        super(decoratedPrice);
    }

    @Override
    public int add() {
        return decoratedPrice.add() + stillSpikePrice();
    }

    public int stillSpikePrice() {
        int p = decoratedPrice.add();
        return (p / 100) * 10;
    }
}
