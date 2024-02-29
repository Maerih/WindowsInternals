...
DWORD DoInc(PVOID p){
    int& count=*(int*)p;
    for (int i=0; i < loops; i++)
        InterlockedIncrement((unsigned*)&count);
    return 0;
}
...
