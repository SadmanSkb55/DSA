#include <iostream>
#include "unsortedtype.cpp"

using namespace std;

void mergeSequences(int m, int* seq1, int n, int* seq2, UnsortedType<int>& resultList) {
    int i = 0, j = 0;

    while (i < m && j < n) {
        if (seq1[i] < seq2[j]) {
            resultList.InsertItemAtEnd(seq1[i]);
            i++;
        } else {
            resultList.InsertItemAtEnd(seq2[j]);
            j++;
        }
    }

    while (i < m) {
        resultList.InsertItemAtEnd(seq1[i]);
        i++;
    }

    while (j < n) {
        resultList.InsertItemAtEnd(seq2[j]);
        j++;
    }
}

int main() {
    int m, n;

    cout << "Enter the number of elements in the first sequence: ";
    cin >> m;
    int* seq1 = new int[m];
    cout << "Enter the elements of the first sequence in ascending order: ";
    for (int i = 0; i < m; i++) {
        cout<<"Eelement "<<i+1<<" : ";
        cin >> seq1[i];
    }

    cout << "Enter the number of elements in the second sequence: ";
    cin >> n;
    int* seq2 = new int[n];
    cout << "Enter the elements of the second sequence in ascending order: ";
    for (int i = 0; i < n; i++) {
        cout<<"Eelement "<<i+1<<" : ";
        cin >> seq2[i];
    }

    UnsortedType<int> resultList;
    mergeSequences(m, seq1, n, seq2, resultList);

    delete[] seq1;
    delete[] seq2;

    resultList.ResetList();
    cout << "The merged sequence is: ";
    int value;
    for (int i = 0; i < resultList.LengthIs(); i++) {
        resultList.GetNextItem(value);
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
