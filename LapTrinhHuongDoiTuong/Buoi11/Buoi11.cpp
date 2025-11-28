
#include <iostream>
using namespace std;

void main()
{
    do {
        system("cls");
        cout << "---- QUAN LY KY TUC XA ----" << endl;
        cout << "1. Quan ly phong" << endl;
        cout << "2. Quan ly sinh vien" << endl;
        cout << "3. Quan ly hoa don" << endl;
        cout << "4. Bao cao" << endl;
        cout << "0. Thoat" << endl;
        cout << "---------------------------" << endl;
        cout << "Chon chuc nang: ";
        int chucnang;
        cin >> chucnang;
        switch (chucnang)
        {
        case 1:
        {
            do {
                system("cls");
                cout << "---- Quan ly phong ----" << endl;
                cout << "1. Them phong" << endl;
                cout << "2. Xem danh sach phong" << endl;
                cout << "3. Xoa phong" << endl;
                cout << "4. Ghi danh sach phong ra tap tin" << endl;
                cout << "5. Doc danh sach phong tu tap tin" << endl;
                cout << "0. Quay lai" << endl;
                cout << "-----------------------" << endl;
                cout << "Chon chuc nang: ";
                cin >> chucnang;
                if (chucnang == 0)
                    break;
                switch (chucnang)
                {
                case 1:
                {
                    break;
                }
                case 2: {
                    break;
                }
                case 3: {
                    break;
                }
                case 4: {
                    break;
                }
                case 5: {
                    break;
                }
                default:
                    cout << "Chuc nang khong ton tai !!" << endl;
                    break;
                }
                cout << "Go enter de tiep tuc..." << endl;
                cin.ignore();
                cin.get();
            } while (true);
            break;
        }
        case 2: {
            do {
                system("cls");
                cout << "---- Quan ly sinh vien ----" << endl;
                cout << "1. Them sinh vien" << endl;
                cout << "2. Xem danh sach sinh vien" << endl;
                cout << "3. Xoa sinh vien" << endl;
                cout << "4. Ghi danh sach sinh vien ra tap tin" << endl;
                cout << "5. Doc danh sach sinh vien tu tap tin" << endl;
                cout << "0. Quay lai" << endl;
                cout << "-----------------------" << endl;
                cout << "Chon chuc nang: ";
                cin >> chucnang;
                if (chucnang == 0)
                    break;
                switch (chucnang)
                {
                case 1:
                {
                    break;
                }
                case 2: {
                    break;
                }
                case 3: {
                    break;
                }
                case 4: {
                    break;
                }
                case 5: {
                    break;
                }
                default:
                    cout << "Chuc nang khong ton tai !!" << endl;
                    break;
                }
                cout << "Go enter de tiep tuc..." << endl;
                cin.ignore();
                cin.get();
            } while (true);
            break;
        }
        case 3: {
            do {
                system("cls");
                cout << "---- Quan ly hoa don ----" << endl;
                cout << "1. Them hoa don" << endl;
                cout << "2. Xem danh sach hoa don" << endl;      
                cout << "3. Ghi danh sach hoa don ra tap tin" << endl;
                cout << "4. Doc danh sach hoa don tu tap tin" << endl;
                cout << "0. Quay lai" << endl;
                cout << "-----------------------" << endl;
                cout << "Chon chuc nang: ";
                cin >> chucnang;
                if (chucnang == 0)
                    break;
                switch (chucnang)
                {
                case 1:
                {
                    break;
                }
                case 2: {
                    break;
                }         
                case 3: {
                    break;
                }
                case 4: {
                    break;
                }
                default:
                    cout << "Chuc nang khong ton tai !!" << endl;
                    break;
                }
                cout << "Go enter de tiep tuc..." << endl;
                cin.ignore();
                cin.get();
            } while (true);
            break;
        }
        case 4: {
            break;
        }
        case 0: {
            return;
        }
        default:
            cout << "Chuc nang khong ton tai !!" << endl;
            break;
        }
        cout << "Go enter de tiep tuc..." << endl;
        cin.ignore();
        cin.get();
    } while (true);   
}
