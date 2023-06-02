package questionNO1;

public class screwAdapter implements screwDriver {
    advanceScrewDriver  advancedToolDriver;
    public screwAdapter(String type){
        if(type.equalsIgnoreCase("Rotate")){
            advancedToolDriver = new rotating();
        }else if(type.equalsIgnoreCase("Smash")){
            advancedToolDriver = new smashing();
        }
    }
    @Override
    public void use(String type, String description){
        if(type.equalsIgnoreCase("Rotate")){
            advancedToolDriver.useRotate(description);
        }else if(type.equalsIgnoreCase("Smash")){
            advancedToolDriver.useSmash(description);
        }
    }
}
