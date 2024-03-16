
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

 TFile *f=TFile::Open(Form("/exp/mu2e/app/users/sgamba/r001/trkvst.annex.trk_fragment_ana.%d.hist",RunNumber));

 TH1F * h2 = (TH1F*)f->Get("TrkFragmentAna/trk/roc_1/ch_50/h_wf_ch_50_2");
 TH1F * h1 = (TH1F*)f->Get("TrkFragmentAna/trk/roc_1/ch_50/h_wf_ch_50_5");

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
 c1->SaveAs("/exp/mu2e/app/users/sgamba/r001/collaboration_meeting_1/figures/pdf/waveform_50_link_2.pdf");
TCanvas * c2 = new TCanvas("c2","c2");
 h1->SetLineColor(4);
 h1->SetFillColor(4);
 h1->SetFillStyle(3002);
 h1->SetBarWidth(0.84);
 h1->SetBarOffset(0.5);
 h1->GetXaxis()->SetTitle("sample");
 h1->SetTitle(Form("RUN:%d, ch50, TS2, Waveform",RunNumber));
 gStyle->SetOptStat(1111111);
 h1->Draw("B");
 c2->SaveAs("/exp/mu2e/app/users/sgamba/r001/collaboration_meeting_1/figures/pdf/waveform_50_link_2_neg.pdf");
}
void plot_wf_bit(int RunNumber){

 TFile *f=TFile::Open(Form("/exp/mu2e/app/users/sgamba/r001/trkvst.annex.trk_fragment_ana.%d.hist",RunNumber));

 TH1F * h1 = (TH1F*)f->Get("TrkFragmentAna/trk/roc_0/ch_58/h_wf_ch_58_0");
 TCanvas * c2 = new TCanvas("c2","c2");

 h1->SetLineColor(4);
 h1->SetFillColor(4);
 h1->SetFillStyle(3002);
 h1->SetBarWidth(0.84);
 h1->SetBarOffset(0.5);
 h1->GetXaxis()->SetTitle("sample");
 h1->SetTitle(Form("RUN:%d, ch58, TS2, Waveform",RunNumber));
 gStyle->SetOptStat(1111111);
 h1->Draw("B");
 c2->SaveAs("/exp/mu2e/app/users/sgamba/r001/collaboration_meeting_1/figures/pdf/waveform_biterror.pdf");
}
void plot_deltat(int RunNumber){

 TFile *f=TFile::Open(Form("/exp/mu2e/app/users/sgamba/r001/trkvst.annex.trk_fragment_ana.%d.hist",RunNumber));

 TH1F * h1 = (TH1F*)f->Get("TrkFragmentAna/trk/roc_0/ch_50/ch_50_dt0");
 TCanvas * c2 = new TCanvas("c2","c2");

 h1->SetLineColor(4);
 h1->SetFillColor(4);
 h1->SetFillStyle(3002);
 h1->SetBarWidth(0.84);
 h1->SetBarOffset(0.5);
 h1->GetXaxis()->SetTitle("sample");
 h1->SetTitle(Form("RUN:%d, ch50, #Delta t_{hits}",RunNumber));
 gStyle->SetOptStat(1111111);
 h1->Draw("");
 c2->SaveAs("/exp/mu2e/app/users/sgamba/r001/collaboration_meeting_1/figures/pdf/deltat.pdf");
}
void plot_features(int RunNumber){

 TFile *f=TFile::Open(Form("/exp/mu2e/app/users/sgamba/r001/trkvst.annex.trk_fragment_ana.%d.hist",RunNumber));

 TH1F * h1 = (TH1F*)f->Get("TrkFragmentAna/trk/roc_0/fs_vs_ich");
 TCanvas * c2 = new TCanvas("c2","c2");

 h1->GetYaxis()->SetTitle("First Sample");
 h1->GetXaxis()->SetTitle("channel ID");
 h1->SetMarkerStyle(8);
 h1->SetTitle(Form("RUN:%d, First Sample vs Channel",RunNumber));
 gStyle->SetOptStat(11111111);
 h1->Draw("");
 c2->SaveAs("/exp/mu2e/app/users/sgamba/r001/collaboration_meeting_1/figures/pdf/fs_vs_ch.pdf");
 TH1F * h2 = (TH1F*)f->Get("TrkFragmentAna/trk/roc_0/bl_vs_ich");
 TCanvas * c1 = new TCanvas("c1","c1");

 h2->GetYaxis()->SetTitle("Baseline");
 h2->GetXaxis()->SetTitle("channel ID");
 h2->SetMarkerStyle(8);
 h2->SetTitle(Form("RUN:%d, Baseline mean vs Channel",RunNumber));
 gStyle->SetOptStat(11111111);
 h2->Draw("");
 c1->SaveAs("/exp/mu2e/app/users/sgamba/r001/collaboration_meeting_1/figures/pdf/bl_vs_ch.pdf");
 TH1F * h3 = (TH1F*)f->Get("TrkFragmentAna/trk/roc_0/q_vs_ich");
 TCanvas * c3 = new TCanvas("c3","c3");

 h3->GetYaxis()->SetTitle("Charge");
 h3->GetXaxis()->SetTitle("channel ID");
 h3->SetMarkerStyle(8);
 h3->SetTitle(Form("RUN:%d, Charge mean vs Channel",RunNumber));
 gStyle->SetOptStat(11111111);
 h3->Draw("");
 c3->SaveAs("/exp/mu2e/app/users/sgamba/r001/collaboration_meeting_1/figures/pdf/q_vs_ch.pdf");
TH1F * h4 = (TH1F*)f->Get("TrkFragmentAna/trk/roc_0/ph_vs_ich");
 TCanvas * c4 = new TCanvas("c4","c4");

 h4->GetYaxis()->SetTitle("Pulse Height");
 h4->GetXaxis()->SetTitle("channel ID");
 h4->SetMarkerStyle(8);
 h4->SetTitle(Form("RUN:%d, Pulse height mean vs Channel",RunNumber));
 gStyle->SetOptStat(11111111);
 h4->Draw("");
 c4->SaveAs("/exp/mu2e/app/users/sgamba/r001/collaboration_meeting_1/figures/pdf/ph_vs_ch.pdf");
}
void plot_p(int RunNumber){

 TFile *f=TFile::Open(Form("/exp/mu2e/app/users/sgamba/r001/trkvst.annex.trk_fragment_ana.%d.hist",RunNumber));

 TH1F * h1 = (TH1F*)f->Get("TrkFragmentAna/trk/roc_0/ch_66/ch_66_ph_vs_tmean");
 TH1F * h2 = (TH1F*)f->Get("TrkFragmentAna/trk/roc_0/ch_66/ch_66_tmean");
 TCanvas * c2 = new TCanvas("c2","c2");

 
 h1->SetLineColor(4);
 h1->SetFillColor(4);
 h1->SetFillStyle(3002);
 h1->SetBarWidth(0.84);
 h1->SetBarOffset(0.5);
 h1->GetXaxis()->SetTitle("t_{mean}");
h1->GetYaxis()->SetTitle("pulse height");
 h1->SetTitle(Form("RUN:%d, ch66, Pulse Height vs T_{mean}",RunNumber));
 gStyle->SetOptStat(1111111);
 h1->Draw("");
 c2->SaveAs("/exp/mu2e/app/users/sgamba/r001/collaboration_meeting_1/figures/pdf/phtmean.pdf");
TCanvas * c3 = new TCanvas("c3","c3");
 h2->SetLineColor(4);
 h2->SetFillColor(4);
 h2->SetFillStyle(3002);
 h2->SetBarWidth(0.84);
 h2->SetBarOffset(0.5);
 h2->GetXaxis()->SetTitle("t_{mean}");
h1->GetYaxis()->SetTitle("counts");
 h2->SetTitle(Form("RUN:%d, ch66, T_{mean} distribution",RunNumber));
 h2->Draw("");
 c3->SaveAs("/exp/mu2e/app/users/sgamba/r001/collaboration_meeting_1/figures/pdf/tmean.pdf");
}
void plot_chph(int RunNumber){

 TFile *f=TFile::Open(Form("/exp/mu2e/app/users/sgamba/r001/trkvst.annex.trk_fragment_ana.%d.hist",RunNumber));

 TH1F * h1 = (TH1F*)f->Get("TrkFragmentAna/trk/roc_0/ch_66/ch_66_ph");
 TH1F * h2 = (TH1F*)f->Get("TrkFragmentAna/trk/roc_0/ch_66/ch_66_q");
 TCanvas * c2 = new TCanvas("c2","c2",1400,1200);

 c2->Divide(1,2);
 c2->cd(1);
 h1->SetLineColor(4);
 h1->SetFillColor(4);
 h1->SetFillStyle(3002);
 h1->SetBarWidth(0.84);
 h1->SetBarOffset(0.5);
 h1->GetXaxis()->SetTitle("pulse height");
 h1->GetYaxis()->SetTitle("counts");
 h1->SetTitle(Form("RUN:%d, ch66, Pulse Height Distribution",RunNumber));
 gStyle->SetOptStat(1111111);
 h1->Draw("");

 c2->cd(2);
 h2->SetLineColor(4);
 h2->SetFillColor(4);
 h2->SetFillStyle(3002);
 h2->SetBarWidth(0.84);
 h2->SetBarOffset(0.5);
h2->GetXaxis()->SetTitle("charge");
 h1->GetYaxis()->SetTitle("counts");
 h2->SetTitle(Form("RUN:%d, ch66, Charge Distribution",RunNumber));
 h2->Draw("");
 c2->SaveAs("/exp/mu2e/app/users/sgamba/r001/collaboration_meeting_1/figures/pdf/p.pdf");
}
void plot_wf_gl(){

 TFile *f=TFile::Open("/exp/mu2e/app/users/sgamba/r001/trkvst.annex.trk_fragment_ana.105348.hist");

 TH1F * h1 = (TH1F*)f->Get("TrkFragmentAna/trk/roc_0/ch_96/h_wf_ch_96_1");

TCanvas * c2 = new TCanvas("c2","c2");
 h1->SetLineColor(4);
 h1->SetFillColor(4);
 h1->SetFillStyle(3002);
 h1->SetBarWidth(0.84);
 h1->SetBarOffset(0.5);
 h1->GetXaxis()->SetTitle("sample");
 h1->SetTitle("RUN:105348, ch00, TS1, Waveform");
 gStyle->SetOptStat(1111111);
 h1->Draw("B");
 c2->SaveAs("/exp/mu2e/app/users/sgamba/r001/collaboration_meeting_1/figures/pdf/glitcheswf.pdf");
}
void plot_noisy(){

 TFile *f=TFile::Open("/exp/mu2e/app/users/sgamba/r001/trkvst.annex.trk_fragment_ana.105344.hist");

 TH1F * h1 = (TH1F*)f->Get("TrkFragmentAna/trk/roc_0/ch_36/h_wf_ch_36_2");

TCanvas * c2 = new TCanvas("c2","c2");
 h1->SetLineColor(4);
 h1->SetFillColor(4);
 h1->SetFillStyle(3002);
 h1->SetBarWidth(0.84);
 h1->SetBarOffset(0.5);
 h1->GetXaxis()->SetTitle("sample");
 h1->SetTitle("RUN:105344, ch36, TS1, Waveform");
 gStyle->SetOptStat(1111111);
 h1->Draw("B");
 c2->SaveAs("/exp/mu2e/app/users/sgamba/r001/collaboration_meeting_1/figures/pdf/noisy.pdf");
}
