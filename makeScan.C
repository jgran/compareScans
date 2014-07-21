makeScan(std::string infile, std::string scanString, std::string scanLog){ 

TFile *f1 = new TFile(Form("%s", infile.c_str(), "READ"));
TTree *t1 = (TTree*)f1->Get("treeProducerSusyFullHad");

((TTreePlayer*)(t1->GetPlayer()))->SetScanRedirect(true);
((TTreePlayer*)(t1->GetPlayer()))->SetScanFileName(Form("%s", scanLog.c_str())); 
t1->SetScanField(0);
t1->Scan(Form("%s", scanString.c_str()), "", "precision=4 col=.10::");

}
