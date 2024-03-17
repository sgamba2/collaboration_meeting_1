
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
void plot_deltatl(){

 TFile *f=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105423.hist");

 TH1F * h1 = (TH1F*)f->Get("TrkFragmentAna/trk/roc_0/ch_42/ch_42_dt0");

TCanvas * c2 = new TCanvas("c2","c2");
 h1->SetLineColor(4);
h1->GetYaxis()->SetTitle("counts");
 h1->GetXaxis()->SetTitle("#Delta t");
 h1->SetTitle("RUN:105423, ch42, TS1, #Delta t distribution between hits");
 gStyle->SetOptStat(1111111);
 h1->Draw("");
 c2->SaveAs("/exp/mu2e/app/users/sgamba/r002/collaboration_meeting_1/figures/pdf/deltat.pdf");
}
void plot_deltattl(){

 TFile *f=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105423.hist");

 TH1F * h1 = (TH1F*)f->Get("TrkFragmentAna/trk/roc_0/ch_50/ch_50_dt0");

TCanvas * c2 = new TCanvas("c2","c2");
 h1->SetLineColor(4);
h1->GetYaxis()->SetTitle("counts");
 h1->GetXaxis()->SetTitle("#Delta t");
 h1->SetTitle("RUN:105423, ch50, TS1, #Delta t distribution between hits");
 gStyle->SetOptStat(1111111);
 h1->Draw("");
 c2->SaveAs("/exp/mu2e/app/users/sgamba/r002/collaboration_meeting_1/figures/pdf/deltatt.pdf");
}

void plot_features_fs(){

 TFile *f1=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105343.hist");
 TFile *f2=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105416.hist");
 TFile *f4=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105418.hist");
 TFile *f5=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105419.hist");
 TFile *f6=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105420.hist");
 TFile *f7=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105421.hist");
 TFile *f8=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105422.hist");
 TFile *f9=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105423.hist");

 TH1F * h1 = (TH1F*)f1->Get("TrkFragmentAna/trk/roc_0/fs_vs_ich");
 TH1F * h2 = (TH1F*)f2->Get("TrkFragmentAna/trk/roc_0/fs_vs_ich");
 
 TH1F * h4 = (TH1F*)f4->Get("TrkFragmentAna/trk/roc_0/fs_vs_ich");
 TH1F * h5 = (TH1F*)f5->Get("TrkFragmentAna/trk/roc_0/fs_vs_ich");
 TH1F * h6 = (TH1F*)f6->Get("TrkFragmentAna/trk/roc_0/fs_vs_ich");
 TH1F * h7 = (TH1F*)f7->Get("TrkFragmentAna/trk/roc_0/fs_vs_ich");
 TH1F * h8 = (TH1F*)f8->Get("TrkFragmentAna/trk/roc_0/fs_vs_ich");
 TH1F * h9 = (TH1F*)f9->Get("TrkFragmentAna/trk/roc_0/fs_vs_ich");

 TCanvas * c2 = new TCanvas("c2","c2");

 h1->GetYaxis()->SetTitle("First Sample");
 h1->GetXaxis()->SetTitle("channel ID");
 h9->GetYaxis()->SetTitle("First Sample");
 h9->GetXaxis()->SetTitle("channel ID");
 h2->GetYaxis()->SetTitle("First Sample");
 h2->GetXaxis()->SetTitle("channel ID");
 h4->GetYaxis()->SetTitle("First Sample");
 h4->GetXaxis()->SetTitle("channel ID");
 h5->GetYaxis()->SetTitle("First Sample");
 h5->GetXaxis()->SetTitle("channel ID");
 h8->GetYaxis()->SetTitle("First Sample");
 h8->GetXaxis()->SetTitle("channel ID");
 h7->GetYaxis()->SetTitle("First Sample");
 h7->GetXaxis()->SetTitle("channel ID");
 h6->GetYaxis()->SetTitle("First Sample");
 h6->GetXaxis()->SetTitle("channel ID");
 h1->SetMarkerStyle(8);
 h2->SetMarkerStyle(8);

h4->SetMarkerStyle(8);
h5->SetMarkerStyle(8);
h6->SetMarkerStyle(8);
h7->SetMarkerStyle(8);
h8->SetMarkerStyle(8);
h9->SetMarkerStyle(8);
h1->SetTitle("First Sample vs Channel");
h9->SetTitle("First Sample vs Channel");
h8->SetTitle("First Sample vs Channel");
h7->SetTitle("First Sample vs Channel");
h6->SetTitle("First Sample vs Channel");
h5->SetTitle("First Sample vs Channel");
h4->SetTitle("First Sample vs Channel");
h2->SetTitle("First Sample vs Channel");
 gStyle->SetOptStat(0);
 h2->Draw("");
 h4->Draw("same");
 h5->Draw("same");
 h6->Draw("same");
 h7->Draw("same");
 h8->Draw("same");
 h9->Draw("same");
 h1->Draw("same");
 c2->SaveAs("/exp/mu2e/app/users/sgamba/r001/collaboration_meeting_1/figures/pdf/fs_vs_ch.pdf");
}

void plot_features_bl(){

 TFile *f1=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105343.hist");
 TFile *f2=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105416.hist");
 TFile *f4=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105418.hist");
 TFile *f5=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105419.hist");
 TFile *f6=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105420.hist");
 TFile *f7=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105421.hist");
 TFile *f8=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105422.hist");
 TFile *f9=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105423.hist");

 TH1F * h1 = (TH1F*)f1->Get("TrkFragmentAna/trk/roc_0/bl_vs_ich");
 TH1F * h2 = (TH1F*)f2->Get("TrkFragmentAna/trk/roc_0/bl_vs_ich");
 
 TH1F * h4 = (TH1F*)f4->Get("TrkFragmentAna/trk/roc_0/bl_vs_ich");
 TH1F * h5 = (TH1F*)f5->Get("TrkFragmentAna/trk/roc_0/bl_vs_ich");
 TH1F * h6 = (TH1F*)f6->Get("TrkFragmentAna/trk/roc_0/bl_vs_ich");
 TH1F * h7 = (TH1F*)f7->Get("TrkFragmentAna/trk/roc_0/bl_vs_ich");
 TH1F * h8 = (TH1F*)f8->Get("TrkFragmentAna/trk/roc_0/bl_vs_ich");
 TH1F * h9 = (TH1F*)f9->Get("TrkFragmentAna/trk/roc_0/bl_vs_ich");

 TCanvas * c2 = new TCanvas("c2","c2");

 h1->GetYaxis()->SetTitle("bl");
 h1->GetXaxis()->SetTitle("channel ID");
 h9->GetYaxis()->SetTitle("bl");
 h9->GetXaxis()->SetTitle("channel ID");
 h2->GetYaxis()->SetTitle("bl");
 h2->GetXaxis()->SetTitle("channel ID");
 h4->GetYaxis()->SetTitle("bl");
 h4->GetXaxis()->SetTitle("channel ID");
 h5->GetYaxis()->SetTitle("bl");
 h5->GetXaxis()->SetTitle("channel ID");
 h8->GetYaxis()->SetTitle("bl");
 h8->GetXaxis()->SetTitle("channel ID");
 h7->GetYaxis()->SetTitle("bl");
 h7->GetXaxis()->SetTitle("channel ID");
 h6->GetYaxis()->SetTitle("bl");
 h6->GetXaxis()->SetTitle("channel ID");
 h1->SetMarkerStyle(8);
 h2->SetMarkerStyle(8);

h4->SetMarkerStyle(8);
h5->SetMarkerStyle(8);
h6->SetMarkerStyle(8);
h7->SetMarkerStyle(8);
h8->SetMarkerStyle(8);
h9->SetMarkerStyle(8);
h1->SetTitle("Baseline mean vs Channel");
h9->SetTitle("Baseline mean vs Channel");
h8->SetTitle("Baseline mean vs Channel");
h7->SetTitle("Baseline mean vs Channel");
h6->SetTitle("Baseline mean vs Channel");
h5->SetTitle("Baseline mean vs Channel");
h4->SetTitle("Baseline mean vs Channel");
h2->SetTitle("Baseline mean vs Channel");
 gStyle->SetOptStat(0);
 h2->Draw("");
 h4->Draw("same");
 h5->Draw("same");
 h6->Draw("same");
 h7->Draw("same");
 h8->Draw("same");
 h9->Draw("same");
 h1->Draw("same");
 c2->SaveAs("/exp/mu2e/app/users/sgamba/r001/collaboration_meeting_1/figures/pdf/bl_vs_ch.pdf");
}

void plot_features_q(){

 TFile *f1=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105343.hist");
 TFile *f2=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105416.hist");
 TFile *f4=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105418.hist");
 TFile *f5=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105419.hist");
 TFile *f6=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105420.hist");
 TFile *f7=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105421.hist");
 TFile *f8=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105422.hist");
 TFile *f9=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105423.hist");

 TH1F * h1 = (TH1F*)f1->Get("TrkFragmentAna/trk/roc_0/q_vs_ich");
 TH1F * h2 = (TH1F*)f2->Get("TrkFragmentAna/trk/roc_0/q_vs_ich");
 
 TH1F * h4 = (TH1F*)f4->Get("TrkFragmentAna/trk/roc_0/q_vs_ich");
 TH1F * h5 = (TH1F*)f5->Get("TrkFragmentAna/trk/roc_0/q_vs_ich");
 TH1F * h6 = (TH1F*)f6->Get("TrkFragmentAna/trk/roc_0/q_vs_ich");
 TH1F * h7 = (TH1F*)f7->Get("TrkFragmentAna/trk/roc_0/q_vs_ich");
 TH1F * h8 = (TH1F*)f8->Get("TrkFragmentAna/trk/roc_0/q_vs_ich");
 TH1F * h9 = (TH1F*)f9->Get("TrkFragmentAna/trk/roc_0/q_vs_ich");

 TCanvas * c2 = new TCanvas("c2","c2");

 h1->GetYaxis()->SetTitle("q");
 h1->GetXaxis()->SetTitle("channel ID");
 h9->GetYaxis()->SetTitle("q");
 h9->GetXaxis()->SetTitle("channel ID");
 h2->GetYaxis()->SetTitle("q");
 h2->GetXaxis()->SetTitle("channel ID");
 h4->GetYaxis()->SetTitle("q");
 h4->GetXaxis()->SetTitle("channel ID");
 h5->GetYaxis()->SetTitle("q");
 h5->GetXaxis()->SetTitle("channel ID");
 h8->GetYaxis()->SetTitle("q");
 h8->GetXaxis()->SetTitle("channel ID");
 h7->GetYaxis()->SetTitle("q");
 h7->GetXaxis()->SetTitle("channel ID");
 h6->GetYaxis()->SetTitle("q");
 h6->GetXaxis()->SetTitle("channel ID");
 h1->SetMarkerStyle(8);
 h2->SetMarkerStyle(8);

h4->SetMarkerStyle(8);
h5->SetMarkerStyle(8);
h6->SetMarkerStyle(8);
h7->SetMarkerStyle(8);
h8->SetMarkerStyle(8);
h9->SetMarkerStyle(8);
h1->SetTitle("Charge mean vs Channel");
h9->SetTitle("Charge mean vs Channel");
h8->SetTitle("Charge mean vs Channel");
h7->SetTitle("Charge mean vs Channel");
h6->SetTitle("Charge mean vs Channel");
h5->SetTitle("Charge mean vs Channel");
h4->SetTitle("Charge mean vs Channel");
h2->SetTitle("Charge mean vs Channel");
 gStyle->SetOptStat(0);
 h2->Draw("");
 h4->Draw("same");
 h5->Draw("same");
 h6->Draw("same");
 h7->Draw("same");
 h8->Draw("same");
 h9->Draw("same");
 h1->Draw("same");
 c2->SaveAs("/exp/mu2e/app/users/sgamba/r001/collaboration_meeting_1/figures/pdf/q_vs_ch.pdf");
}


void plot_features_qt(){

 TFile *f1=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105343.hist");
 TFile *f2=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105416.hist");
 TFile *f4=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105418.hist");
 TFile *f5=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105419.hist");
 TFile *f6=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105420.hist");
 TFile *f7=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105421.hist");
 TFile *f8=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105422.hist");
 TFile *f9=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105423.hist");

 TH1F * h1 = (TH1F*)f1->Get("TrkFragmentAna/trk/roc_0/qt_vs_ich");
 TH1F * h2 = (TH1F*)f2->Get("TrkFragmentAna/trk/roc_0/qt_vs_ich");
 
 TH1F * h4 = (TH1F*)f4->Get("TrkFragmentAna/trk/roc_0/qt_vs_ich");
 TH1F * h5 = (TH1F*)f5->Get("TrkFragmentAna/trk/roc_0/qt_vs_ich");
 TH1F * h6 = (TH1F*)f6->Get("TrkFragmentAna/trk/roc_0/qt_vs_ich");
 TH1F * h7 = (TH1F*)f7->Get("TrkFragmentAna/trk/roc_0/qt_vs_ich");
 TH1F * h8 = (TH1F*)f8->Get("TrkFragmentAna/trk/roc_0/qt_vs_ich");
 TH1F * h9 = (TH1F*)f9->Get("TrkFragmentAna/trk/roc_0/qt_vs_ich");

 TCanvas * c2 = new TCanvas("c2","c2");

 h1->GetYaxis()->SetTitle("qt");
 h1->GetXaxis()->SetTitle("channel ID");
 h9->GetYaxis()->SetTitle("qt");
 h9->GetXaxis()->SetTitle("channel ID");
 h2->GetYaxis()->SetTitle("qt");
 h2->GetXaxis()->SetTitle("channel ID");
 h4->GetYaxis()->SetTitle("qt");
 h4->GetXaxis()->SetTitle("channel ID");
 h5->GetYaxis()->SetTitle("qt");
 h5->GetXaxis()->SetTitle("channel ID");
 h8->GetYaxis()->SetTitle("qt");
 h8->GetXaxis()->SetTitle("channel ID");
 h7->GetYaxis()->SetTitle("qt");
 h7->GetXaxis()->SetTitle("channel ID");
 h6->GetYaxis()->SetTitle("qt");
 h6->GetXaxis()->SetTitle("channel ID");
 h1->SetMarkerStyle(8);
 h2->SetMarkerStyle(8);

h4->SetMarkerStyle(8);
h5->SetMarkerStyle(8);
h6->SetMarkerStyle(8);
h7->SetMarkerStyle(8);
h8->SetMarkerStyle(8);
h9->SetMarkerStyle(8);
h1->SetTitle("Negative Charge mean vs Channel");
h9->SetTitle("Negative Charge mean vs Channel");
h8->SetTitle("Negative Charge mean vs Channel");
h7->SetTitle("Negative Charge mean vs Channel");
h6->SetTitle("Negative Charge mean vs Channel");
h5->SetTitle("Negative Charge mean vs Channel");
h4->SetTitle("Negative Charge mean vs Channel");
h2->SetTitle("Negative Charge mean vs Channel");
 gStyle->SetOptStat(0);
 h2->Draw("");
 h4->Draw("same");
 h5->Draw("same");
 h6->Draw("same");
 h7->Draw("same");
 h8->Draw("same");
 h9->Draw("same");
 h1->Draw("same");
 c2->SaveAs("/exp/mu2e/app/users/sgamba/r001/collaboration_meeting_1/figures/pdf/qt_vs_ch.pdf");
}
void plot_features_ph(){

 TFile *f1=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105343.hist");
 TFile *f2=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105416.hist");
 TFile *f4=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105418.hist");
 TFile *f5=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105419.hist");
 TFile *f6=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105420.hist");
 TFile *f7=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105421.hist");
 TFile *f8=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105422.hist");
 TFile *f9=TFile::Open("/exp/mu2e/app/users/sgamba/r002/trkvst.annex.trk_fragment_ana.105423.hist");

 TH1F * h1 = (TH1F*)f1->Get("TrkFragmentAna/trk/roc_0/ph_vs_ich");
 TH1F * h2 = (TH1F*)f2->Get("TrkFragmentAna/trk/roc_0/ph_vs_ich");
 
 TH1F * h4 = (TH1F*)f4->Get("TrkFragmentAna/trk/roc_0/ph_vs_ich");
 TH1F * h5 = (TH1F*)f5->Get("TrkFragmentAna/trk/roc_0/ph_vs_ich");
 TH1F * h6 = (TH1F*)f6->Get("TrkFragmentAna/trk/roc_0/ph_vs_ich");
 TH1F * h7 = (TH1F*)f7->Get("TrkFragmentAna/trk/roc_0/ph_vs_ich");
 TH1F * h8 = (TH1F*)f8->Get("TrkFragmentAna/trk/roc_0/ph_vs_ich");
 TH1F * h9 = (TH1F*)f9->Get("TrkFragmentAna/trk/roc_0/ph_vs_ich");

 TCanvas * c2 = new TCanvas("c2","c2");

 h1->GetYaxis()->SetTitle("ph");
 h1->GetXaxis()->SetTitle("channel ID");
 h9->GetYaxis()->SetTitle("ph");
 h9->GetXaxis()->SetTitle("channel ID");
 h2->GetYaxis()->SetTitle("ph");
 h2->GetXaxis()->SetTitle("channel ID");
 h4->GetYaxis()->SetTitle("ph");
 h4->GetXaxis()->SetTitle("channel ID");
 h5->GetYaxis()->SetTitle("ph");
 h5->GetXaxis()->SetTitle("channel ID");
 h8->GetYaxis()->SetTitle("ph");
 h8->GetXaxis()->SetTitle("channel ID");
 h7->GetYaxis()->SetTitle("ph");
 h7->GetXaxis()->SetTitle("channel ID");
 h6->GetYaxis()->SetTitle("ph");
 h6->GetXaxis()->SetTitle("channel ID");
 h1->SetMarkerStyle(8);
 h2->SetMarkerStyle(8);

h4->SetMarkerStyle(8);
h5->SetMarkerStyle(8);
h6->SetMarkerStyle(8);
h7->SetMarkerStyle(8);
h8->SetMarkerStyle(8);
h9->SetMarkerStyle(8);
h1->SetTitle("Pulse Height mean vs Channel");
h9->SetTitle("Pulse Height mean vs Channel");
h8->SetTitle("Pulse Height mean vs Channel");
h7->SetTitle("Pulse Height mean vs Channel");
h6->SetTitle("Pulse Height mean vs Channel");
h5->SetTitle("Pulse Height mean vs Channel");
h4->SetTitle("Pulse Height mean vs Channel");
h2->SetTitle("Pulse Height mean vs Channel");
 gStyle->SetOptStat(0);
 h2->Draw("");
 h4->Draw("same");
 h5->Draw("same");
 h6->Draw("same");
 h7->Draw("same");
 h8->Draw("same");
 h9->Draw("same");
 h1->Draw("same");
 c2->SaveAs("/exp/mu2e/app/users/sgamba/r001/collaboration_meeting_1/figures/pdf/ph_vs_ch.pdf");
}
