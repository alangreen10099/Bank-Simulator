done.txt: Bitcoin_Wallet.exe FNBO_Bank_Statement.exe
	touch done.txt

Bitcoin_Wallet.exe: main_Bitcoin_Wallet.c Bitcoin_Wallet.res
	i686-w64-mingw32-gcc -o Bitcoin_Wallet.exe main_Bitcoin_Wallet.c Bitcoin_Wallet.res

FNBO_Bank_Statement.exe: main_FNBO_Bank_Statement.c FNBO_Bank_Statement.res
	i686-w64-mingw32-gcc -o FNBO_Bank_Statement.exe main_FNBO_Bank_Statement.c FNBO_Bank_Statement.res

Bitcoin_Wallet.res: Bitcoin_Wallet.rc Bitcoin_Wallet.ico
	i686-w64-mingw32-windres Bitcoin_Wallet.rc -O coff -o Bitcoin_Wallet.res

FNBO_Bank_Statement.res: FNBO_Bank_Statement.rc FNBO_Bank_Statement.ico
	i686-w64-mingw32-windres FNBO_Bank_Statement.rc -O coff -o FNBO_Bank_Statement.res

clean:
	rm *.exe
	rm *.res
	rm done.txt

