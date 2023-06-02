package file;

import java.io.File;

public class fileDemo1 {

    public static void main(String[] args) {
        File dir = new File("C:/Users/Rkemo/Documents/Person");
        dir.mkdir();
        String path = dir.getAbsolutePath();
        /*String dirLocation = dir.getAbsolutePath();
        System.out.println(dirLocation);
        System.out.println(dir.getName());
        if(dir.delete()){
            System.out.println(dir.getName()+" Folder has been deleted...");
        }*/

        File file1 = new File(path+"/Student.txt");
        File file2 = new File(path+"/Teacher.txt");

        try {
                file1.createNewFile();
                file2.createNewFile(); 
                System.out.println("Files are created successfully");
        } catch (Exception e) {
            System.out.println(e);
        }
    }

}
