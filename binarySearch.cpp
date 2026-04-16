void input()


    while (true)
    {
        cout << "Masukan banyak nya elemen pada array (maksimal 10): ";\
        cin >> nPanjang;


        if (nPanjang > 10)
        {
            break;
        }
        else
        {
            cout << "\n [!] Masukan tidak valid, silahkan coba lagi.\n\n";
        }
    }

    cout << "\nMasukan elemen pada array: \n";
    for (int i = 0; i < nPanjang; i++)
    {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> element[i];
    }



void bubbleSortArray()
    {
        int pass = 1;
        do
        {
            for (int j = 0; j < nPanjang - pass; j++)
            {
                if (element[j] > element[j + 1])
                {
                    int temp
                }
            }
            pass++;
        } while (pass < nPanjang - 1);
    }


void display()
    {
        cout << "\n========================================\n";
        cout << "Elemen pada array: (asc)\n";
        cout << "==========================================\n";
        for (int j = 0; j < nPanjang; j++)
        {
            cout << element[j];
             if (j < nPanjang - 1)
            {
                cout << ", ";
            }
        }
        cout << endl;
    }


void binarySearch()
{
    char ulang;
    do
    {
        cout << "\nMasukan elemen yang ingin dicari: ";
        cin >> x;

        int low = 0;
        int high = nPanjang - 1;

        do
        {
            int mid = (low + high) / 2;

           if (element[mid] == x)
            {
                cout << "\nElemen ditemukan pada indeks ke-" << mid + 1 << endl;
                return;
            }
            if (x < element[mid])
            {
                high = mid - 1;
            }
            if (x > element[mid])
            {
                low = mid + 1;
            }
        } while (low <= high);

        if (low > high)
        {
            cout << "\nElemen tidak ditemukan dalam array.\n";

        }
        cout << "\nApakah Anda ingin mencari elemen lain? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');
}

int main()
{
    input();
    bubbleSortArray();
    display();
    binarySearch();

}