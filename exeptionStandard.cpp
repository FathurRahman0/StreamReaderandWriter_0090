#include <iostream>
#include <exception>
//untuk obyek exception yang akan digunakan
#include <array>
//untuk obyek array yang akan kita gunakan
using namespace std;

int main()
{
    cout << "Awal Program" << endl; // penanda 1:...
    try{
        array<int, 3> data = {10, 20, 25};
        //pesan arrat integer 3 elemen
        cout << data.at(5) << endl;
        //memanggil array integer elemen 5
    }
    catch(exception& e)
    {
        // penangkap menggunakan objek exception
        cout << e.what() << endl;
        /* akan dieksekusi karena array data hanya memiliki 3 elemen*/
    }
    cout << "Baris Program Yang Terakhir" << endl;
    /* penanda 2: bahwa program berjalan tanpa berhenti meskipun terjadi kesalahan*/

    return 0;
}
