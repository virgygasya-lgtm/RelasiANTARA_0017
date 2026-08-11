void ibu::cetakAnak() {
    cout << "Daftar Anak dari Ibu \"" << this->nama << "\":\n";
    /*for (auto& a : daftar_anak) {
        cout << a->nama << "\n";
    }*/
    for (int i = 0; i < daftar_anak.size(); i++) {
        cout << daftar_anak[i]->nama << endl;
    }
    cout << endl;
}
#endif