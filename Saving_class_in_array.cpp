    #include <iostream>
    using namespace std;

    class Product {
    public:
    string name;
    int id;
    string category;
    int price;

    Product(string name, int id, string category, int price) {
        this->name = name;
        this->id = id;
        this->category = category;
        this->price = price;
    }

    static void bubbleSortByPrice(Product* products, int n) {
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (products[j].price > products[j + 1].price) {
                Product temp = products[j];
                products[j] = products[j + 1];
                products[j + 1] = temp;
                }
            }
        }
    }

    static void bubbleSortByName(Product* products, int n) {
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (products[j].name > products[j + 1].name) {
                Product temp = products[j];
                products[j] = products[j + 1];
                products[j + 1] = temp;
                }
            }
        }
    }

    static void selectionSortByPrice(Product* products, int n) {
        for (int i = 0; i < n; i++) {
        int j = i;
            for (int j = i + 1; j < n; j++) {
                if (products[j].price < products[j].price) {
                Product temp = products[i];
                products[i] = products[j];
                products[j] = temp;
                }
            }
        
        }
    }

    static void selectionSortByName(Product* products, int n) {
        for (int i = 0; i < n; i++) {
        
            for (int j = i + 1; j < n; j++) {
                if (products[j].name < products[j].name) {
                    Product temp = products[i];
                    products[i] = products[j];
                    products[j] = temp;
                }
            }
        
        }
    }
    };

    int main() {
    Product products[] = {
        Product("iPhone", 1, "Phone", 1000),
        Product("Samsung Galaxy", 2, "Phone", 900),
        Product("MacBook Pro", 3, "Laptop", 2000),
        Product("Dell XPS", 4, "Laptop", 1500),
        Product("iPad Pro", 5, "Tablet", 1200),
    };

    Product::bubbleSortByPrice(products, sizeof(products) / sizeof(products[0]));
    for (Product product : products) {
        cout << product.name << " " << product.price << endl;
    }
    cout<< endl;
    Product::bubbleSortByName(products, sizeof(products) / sizeof(products[0]));
    for (Product product : products) {
        cout << product.name << " " << product.price << endl;
    }
    cout<< endl;
    Product::selectionSortByPrice(products, sizeof(products) / sizeof(products[0]));
    for (Product product : products) {
        cout << product.name << " " << product.price << endl;
    }
    cout<< endl;
    Product::selectionSortByName(products, sizeof(products) / sizeof(products[0]));
    for (Product product : products) {
        cout << product.name << " " << product.price << endl;
    }
    cout<< endl;
    return 0;
    }
