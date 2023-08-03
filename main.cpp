#include <iostream>
#include <windows.h>
#include <io.h>
#include <fcntl.h>
#include <fstream>
using namespace std;

int main() {
	_setmode(_fileno(stdout), _O_WTEXT);
	ifstream office_kms("C:\\Program Files\\Microsoft Office\\Office16\\ospp.vbs");

	SetConsoleTitle("Aktywator Office 2022");
	std::wcout<< "=================================\n";
	std::wcout<< "+     Aktywator Office 2022     +\n";
	std::wcout<< "=================================\n";
	std::wcout<< "\n";
	std::wcout<< "";
	if(office_kms) {
		std::wcout<< "‹ Naciœnij ENTER aby rozpocz¹æ aktywacje! ›\n";
	} else {
		std::wcout<< "! Office 2022 nie jest zainstalowany na tym komputerze. ! \n";
		cin.get();
		return 0;
	}
	cin.get();
	system("cls");
	std::wcout<< "=================================\n";
	std::wcout<< "+     Aktywator Office 2022     +\n";
	std::wcout<< "=================================\n";
	std::wcout << "\n";
	std::wcout << "Rozpoczynam aktywacje...";
	Sleep(1000);
	system("slmgr.vbs /skms elektryk.ml");
	system("cscript \"C:\\Windows\\System32\\slmgr.vbs\" /ilc \"C:\\Program Files\\Microsoft Office\\\\root\\Licenses16\\ProPlusVL_KMS_Client-ppd.xrm-ms\"");
	system("cscript \"C:\\Windows\\System32\\slmgr.vbs\" /ilc \"C:\\Program Files\\Microsoft Office\\\\root\\Licenses16\\ProPlusVL_KMS_Client-ul.xrm-ms\"");
	system("cscript \"C:\\Windows\\System32\\slmgr.vbs\" /ilc \"C:\\Program Files\\Microsoft Office\\\\root\\Licenses16\\ProPlusVL_KMS_Client-ul-oob.xrm-ms\"");
	system("cscript \"C:\\Windows\\System32\\slmgr.vbs\" /ilc \"C:\\Program Files\\Microsoft Office\\\\root\\Licenses16\\ProjectProVL_KMS_Client-ppd.xrm-ms\"");
	system("cscript \"C:\\Windows\\System32\\slmgr.vbs\" /ilc \"C:\\Program Files\\Microsoft Office\\\\root\\Licenses16\\ProjectProVL_KMS_Client-ul-oob.xrm-ms\"");
	system("cscript \"C:\\Windows\\System32\\slmgr.vbs\" /ilc \"C:\\Program Files\\Microsoft Office\\\\root\\Licenses16\\ProjectProVL_KMS_Client-ul.xrm-ms\"");
	system("cscript \"C:\\Windows\\System32\\slmgr.vbs\" /ilc \"C:\\Program Files\\Microsoft Office\\\\root\\Licenses16\\VisioProVL_KMS_Client-ppd.xrm-ms\"");
	system("cscript \"C:\\Windows\\System32\\slmgr.vbs\" /ilc \"C:\\Program Files\\Microsoft Office\\\\root\\Licenses16\\VisioProVL_KMS_Client-ul-oob.xrm-ms\"");
	system("cscript \"C:\\Windows\\System32\\slmgr.vbs\" /ilc \"C:\\Program Files\\Microsoft Office\\\\root\\Licenses16\\VisioProVL_KMS_Client-ul.xrm-ms\"");
	system("cscript \"C:\\Windows\\System32\\slmgr.vbs\" /ilc \"C:\\Program Files\\Microsoft Office\\\\root\\Licenses16\\SkypeforBusinessVL_KMS_Client-ppd.xrm-ms\"");
	system("cscript \"C:\\Windows\\System32\\slmgr.vbs\" /ilc \"C:\\Program Files\\Microsoft Office\\\\root\\Licenses16\\SkypeforBusinessVL_KMS_Client-ul.xrm-ms\"");
	system("cscript \"C:\\Windows\\System32\\slmgr.vbs\" /ilc \"C:\\Program Files\\Microsoft Office\\\\root\\Licenses16\\SkypeforBusinessVL_KMS_Client-ul-oob.xrm-ms\"");
	system("cscript \"C:\\Windows\\System32\\slmgr.vbs\" /ilc \"C:\\Program Files\\Microsoft Office\\\\root\\Licenses16\\client-issuance-bridge-office.xrm-ms\"");
	system("cscript \"C:\\Windows\\System32\\slmgr.vbs\" /ilc \"C:\\Program Files\\Microsoft Office\\\\root\\Licenses16\\client-issuance-root.xrm-ms\"");
	system("cscript \"C:\\Windows\\System32\\slmgr.vbs\" /ilc \"C:\\Program Files\\Microsoft Office\\\\root\\Licenses16\\client-issuance-root-bridge-test.xrm-ms\"");
	system("cscript \"C:\\Windows\\System32\\slmgr.vbs\" /ilc \"C:\\Program Files\\Microsoft Office\\\\root\\Licenses16\\client-issuance-stil.xrm-ms\"");
	system("cscript \"C:\\Windows\\System32\\slmgr.vbs\" /ilc \"C:\\Program Files\\Microsoft Office\\\\root\\Licenses16\\client-issuance-ul.xrm-ms\"");
	system("cscript \"C:\\Windows\\System32\\slmgr.vbs\" /ilc \"C:\\Program Files\\Microsoft Office\\\\root\\Licenses16\\client-issuance-ul-oob.xrm-ms\"");
	system("cscript \"C:\\Windows\\System32\\slmgr.vbs\" /ilc \"C:\\Program Files\\Microsoft Office\\\\root\\Licenses16\\pkeyconfig-office.xrm-ms\"");

	system("cscript \"C:\\Program Files\\Microsoft Office\\Office16\\ospp.vbs\" /inslic:\"C:\\Program Files\\Microsoft Office\\root\\Licenses16\\ProPlusVL_KMS_Client-ppd.xrm-ms\"");
	system("cscript \"C:\\Program Files\\Microsoft Office\\Office16\\ospp.vbs\" /inslic:\"C:\\Program Files\\Microsoft Office\\root\\Licenses16\\ProPlusVL_KMS_Client-ul.xrm-ms\"");
	system("cscript \"C:\\Program Files\\Microsoft Office\\Office16\\ospp.vbs\" /inslic:\"C:\\Program Files\\Microsoft Office\\root\\Licenses16\\ProPlusVL_KMS_Client-ul-oob.xrm-ms\"");
	system("cscript \"C:\\Program Files\\Microsoft Office\\Office16\\ospp.vbs\" /inslic:\"C:\\Program Files\\Microsoft Office\\root\\Licenses16\\ProjectProVL_KMS_Client-ppd.xrm-ms\"");
	system("cscript \"C:\\Program Files\\Microsoft Office\\Office16\\ospp.vbs\" /inslic:\"C:\\Program Files\\Microsoft Office\\root\\Licenses16\\ProjectProVL_KMS_Client-ul-oob.xrm-ms\"");
	system("cscript \"C:\\Program Files\\Microsoft Office\\Office16\\ospp.vbs\" /inslic:\"C:\\Program Files\\Microsoft Office\\root\\Licenses16\\ProjectProVL_KMS_Client-ul.xrm-ms\"");
	system("cscript \"C:\\Program Files\\Microsoft Office\\Office16\\ospp.vbs\" /inslic:\"C:\\Program Files\\Microsoft Office\\root\\Licenses16\\VisioProVL_KMS_Client-ppd.xrm-ms\"");
	system("cscript \"C:\\Program Files\\Microsoft Office\\Office16\\ospp.vbs\" /inslic:\"C:\\Program Files\\Microsoft Office\\root\\Licenses16\\VisioProVL_KMS_Client-ul-oob.xrm-ms\"");
	system("cscript \"C:\\Program Files\\Microsoft Office\\Office16\\ospp.vbs\" /inslic:\"C:\\Program Files\\Microsoft Office\\root\\Licenses16\\VisioProVL_KMS_Client-ul.xrm-ms\"");
	system("cscript \"C:\\Program Files\\Microsoft Office\\Office16\\ospp.vbs\" /inslic:\"C:\\Program Files\\Microsoft Office\\root\\Licenses16\\SkypeforBusinessVL_KMS_Client-ppd.xrm-ms\"");
	system("cscript \"C:\\Program Files\\Microsoft Office\\Office16\\ospp.vbs\" /inslic:\"C:\\Program Files\\Microsoft Office\\root\\Licenses16\\SkypeforBusinessVL_KMS_Client-ul.xrm-ms\"");
	system("cscript \"C:\\Program Files\\Microsoft Office\\Office16\\ospp.vbs\" /inslic:\"C:\\Program Files\\Microsoft Office\\root\\Licenses16\\SkypeforBusinessVL_KMS_Client-ul-oob.xrm-ms\"");
	system("cscript \"C:\\Program Files\\Microsoft Office\\Office16\\ospp.vbs\" /inslic:\"C:\\Program Files\\Microsoft Office\\root\\Licenses16\\client-issuance-bridge-office.xrm-ms\"");
	system("cscript \"C:\\Program Files\\Microsoft Office\\Office16\\ospp.vbs\" /inslic:\"C:\\Program Files\\Microsoft Office\\root\\Licenses16\\client-issuance-root.xrm-ms\"");
	system("cscript \"C:\\Program Files\\Microsoft Office\\Office16\\ospp.vbs\" /inslic:\"C:\\Program Files\\Microsoft Office\\root\\Licenses16\\client-issuance-root-bridge-test.xrm-ms\"");
	system("cscript \"C:\\Program Files\\Microsoft Office\\Office16\\ospp.vbs\" /inslic:\"C:\\Program Files\\Microsoft Office\\root\\Licenses16\\client-issuance-stil.xrm-ms\"");
	system("cscript \"C:\\Program Files\\Microsoft Office\\Office16\\ospp.vbs\" /inslic:\"C:\\Program Files\\Microsoft Office\\root\\Licenses16\\client-issuance-ul.xrm-ms\"");
	system("cscript \"C:\\Program Files\\Microsoft Office\\Office16\\ospp.vbs\" /inslic:\"C:\\Program Files\\Microsoft Office\\root\\Licenses16\\client-issuance-ul-oob.xrm-ms\"");
	system("cscript \"C:\\Program Files\\Microsoft Office\\Office16\\ospp.vbs\" /inslic:\"C:\\Program Files\\Microsoft Office\\root\\Licenses16\\pkeyconfig-office.xrm-ms\"");

	system("cscript \"C:\\Program Files\\Microsoft Office\\Office16\\ospp.vbs\" /inpkey:XQNVK-8JYDB-WJ9W3-YJ8YR-WFG99");
	system("cscript \"C:\\Program Files\\Microsoft Office\\Office16\\ospp.vbs\" /inpkey:YG9NW-3K39V-2T3HJ-93F3Q-G83KT");
	system("cscript \"C:\\Program Files\\Microsoft Office\\Office16\\ospp.vbs\" /inpkey:PD3PC-RHNGV-FXJ29-8JK7D-RJRJK");
	system("cscript \"C:\\Program Files\\Microsoft Office\\Office16\\ospp.vbs\" /inpkey:869NQ-FJ69K-466HW-QYCP2-DDBV6");

	system("cscript \"C:\\Program Files\\Microsoft Office\\Office16\\ospp.vbs\" /act");

	system("cls");
	std::wcout<< "=================================\n";
	std::wcout<< "+     Aktywator Office 2022     +\n";
	std::wcout<< "=================================\n";
	std::wcout << "\n";
	std::wcout << "‹ Aktywacja zosta³a zakoñczona! ›\n\n";
	std::wcout << "Naciœnij ENTER aby zamkn¹æ program!";
	cin.get();

	return 0;
}
