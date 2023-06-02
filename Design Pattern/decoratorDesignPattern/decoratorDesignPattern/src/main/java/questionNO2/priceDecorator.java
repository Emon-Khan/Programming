package questionNO2;

public abstract class priceDecorator implements price {
    protected price decoratedPrice;
    public priceDecorator(price decoratedPrice){
        this.decoratedPrice = decoratedPrice;
    }
    
    @Override
    public int add(){
        return decoratedPrice.add();
    }
}
