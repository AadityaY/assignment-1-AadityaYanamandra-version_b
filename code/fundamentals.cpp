#include "fundamentals.hpp"

void insertStockInfo(stockInfo stocks[], string company_name, double stock_prices_arr[], int index) 
{
    stocks[index].company_name = company_name;
    stocks[index].stock_prices_arr[0] = stock_prices_arr[0];
    stocks[index].stock_prices_arr[1] = stock_prices_arr[1];
    stocks[index].stock_prices_arr[2] = stock_prices_arr[2];
    stocks[index].stock_prices_arr[3] = stock_prices_arr[3];
    stocks[index].stock_prices_arr[4] = stock_prices_arr[4];
    stocks[index].average = (stock_prices_arr[0]+stock_prices_arr[1]+stock_prices_arr[2]+stock_prices_arr[3]+stock_prices_arr[4])/5;

    return;
}

void displaySortedStocks(stockInfo stock, ofstream& file){

    int i, j;
    bool swapped;
    for (i = 0; i < 5 - 1; i++) {
        swapped = false;
        for (j = 0; j < 5 - i - 1; j++) {
            if (stock.stock_prices_arr[j] > stock.stock_prices_arr[j + 1]) {
                double temp = stock.stock_prices_arr[j];
                stock.stock_prices_arr[j]=stock.stock_prices_arr[j+1];
                stock.stock_prices_arr[j+1]=temp;
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }

    file << stock.company_name + ",";
    file << (stock.stock_prices_arr[0]+stock.stock_prices_arr[1]+stock.stock_prices_arr[2]+stock.stock_prices_arr[3]+stock.stock_prices_arr[4])/5;
    file << ",";
    file << stock.stock_prices_arr[0];
    file << ",";
    file << stock.stock_prices_arr[1];
    file << ",";
    file << stock.stock_prices_arr[2];
    file << ",";
    file << stock.stock_prices_arr[3];
    file << ",";
    file << stock.stock_prices_arr[4];
    file << '\n';
    cout << stock.company_name + ",";
    cout << (stock.stock_prices_arr[0]+stock.stock_prices_arr[1]+stock.stock_prices_arr[2]+stock.stock_prices_arr[3]+stock.stock_prices_arr[4])/5;
    cout << ",";
    cout << stock.stock_prices_arr[0];
    cout << ",";
    cout << stock.stock_prices_arr[1];
    cout << ",";
    cout << stock.stock_prices_arr[2];
    cout << ",";
    cout << stock.stock_prices_arr[3];
    cout << ",";
    cout << stock.stock_prices_arr[4];
    cout << '\n';
    return;
}