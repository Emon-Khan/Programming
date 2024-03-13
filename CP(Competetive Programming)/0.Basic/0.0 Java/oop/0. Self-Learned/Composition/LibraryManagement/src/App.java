import java.util.ArrayList;
import java.util.List;

public class App {
    public static void main(String[] args) throws Exception {
        Book book1 = new Book("EffectiveJ Java",
                "Joshua Bloch");
        Book book2 = new Book("Thinking in Java",
                "Bruce Eckel");
        Book book3 = new Book("Java: The Complete Reference",
                "Herbert Schildt");
        List<Book> listOfBooks = new ArrayList<>();
        listOfBooks.add(book1);
        listOfBooks.add(book2);
        listOfBooks.add(book3);
        Library library = new Library(listOfBooks);
        for(Book book: library.getBookFromLibrary()){
            System.out.println(book.name);
            System.out.println(book.author);
        }
    }
}
