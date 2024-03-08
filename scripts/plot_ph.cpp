
#include <stdio.h>
#include <string.h>

void plot_ph(int RunNumber){

 TFile *f=TFile::Open(Form("trkvst.annex.trk_fragment_ana.%d.hist",RunNumber));

 TH1F * h1 = (TH1F*)f->Get("TrkFragmentAna/trk/roc_0/ch_97/ch_97_ph");
 TH1F * h2 = (TH1F*)f->Get("TrkFragmentAna/trk/roc_0/ch_96/ch_96_ph");

 h2->SetLineColor(2);
 TCanvas * c1 = new TCanvas("c1","c1");
 c1->cd();
 h1->Draw("");
 h2->Draw("sames");
}
void plot_q(int RunNumber){

 TFile *f=TFile::Open(Form("trkvst.annex.trk_fragment_ana.%d.hist",RunNumber));

 TH1F * h1 = (TH1F*)f->Get("TrkFragmentAna/trk/roc_0/ch_97/ch_97_q");
 TH1F * h2 = (TH1F*)f->Get("TrkFragmentAna/trk/roc_0/ch_96/ch_96_q");

 h2->SetLineColor(2);
 TCanvas * c1 = new TCanvas("c1","c1");
 c1->cd();
 h1->Draw("");
 h2->Draw("sames");
}
void plot_fs(int RunNumber){

 TFile *f=TFile::Open(Form("trkvst.annex.trk_fragment_ana.%d.hist",RunNumber));

 TH1F * h1 = (TH1F*)f->Get("TrkFragmentAna/trk/roc_0/ch_97/ch_97_fs");
 TH1F * h2 = (TH1F*)f->Get("TrkFragmentAna/trk/roc_0/ch_96/ch_96_fs");

 h2->SetLineColor(2);
 TCanvas * c1 = new TCanvas("c1","c1");
 c1->cd();
 h2->Draw("");
 h1->Draw("sames");
}
void plot_wf(int RunNumber){

 TFile *f=TFile::Open(Form("../../trkvst.annex.trk_fragment_ana.%d.hist",RunNumber));

 TH1F * h2 = (TH1F*)f->Get("TrkFragmentAna/trk/roc_1/ch_50/h_wf_ch_50_2");
 TCanvas * c1 = new TCanvas("c1","c1");
 h2->SetLineColor(4);
 h2->SetFillColor(4);
 h2->SetFillStyle(3002);
 h2->SetBarWidth(0.84);
 h2->SetBarOffset(0.5);
 h2->GetXaxis()->SetTitle("sample");
 h2->SetTitle(Form("RUN:%d, ch50, TS2, Waveform",RunNumber));
 gStyle->SetOptStat(1111111);
 h2->Draw("B");
 c1->SaveAs("../figures/pdf/waveform_50_link_2.pdf");
}
