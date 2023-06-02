package questionNO1;

public class flatheadScrewDriver implements screwDriver {

    screwAdapter ScrewAdapter;

    public void use(String type, String description) {
        if (type.equalsIgnoreCase("Rotate") || type.equalsIgnoreCase("Smash")) {
            ScrewAdapter = new screwAdapter(type);
            ScrewAdapter.use(type, description);
        } else {
            System.out.println("Invalid action " + type + " action not supported");
        }
    }
}
