{

gROOT->ProcessLine(".L makeScan.C");

makeScan("file1.root", "evt:run:isData:nVert:nTrueInt:rho:nJet40:nBJet40:nMuons10:nElectrons10:nTaus20:nGammas20:ht","file1_scan01.log"); //need to add lumi
makeScan("file2.root", "evt:run:isData:nVert:nTrueInt:rho:nJet40:nBJet40:nMuons10:nElectrons10:nTaus20:nGammas20:ht","file2_scan01.log"); //need to add lumi

makeScan("file1.root", "evt:deltaPhiMin:diffMetMht:mht_pt:mht_phi:met_pt:met_phi:met_genPt:met_genPhi", "file1_scan02.log");
makeScan("file2.root", "evt:deltaPhiMin:diffMetMht:mht_pt:mht_phi:met_pt:met_phi:met_genPt:met_genPhi", "file2_scan02.log");

makeScan("file1.root", "evt:mt2:mt2_gen:pseudoJet1_pt:pseudoJet1_eta:pseudoJet1_phi:pseudoJet1_mass:pseudoJet1_pt:pseudoJet1_eta:pseudoJet1_phi:pseudoJet1_mass", "file1_scan03.log");
makeScan("file2.root", "evt:mt2:mt2_gen:pseudoJet1_pt:pseudoJet1_eta:pseudoJet1_phi:pseudoJet1_mass:pseudoJet1_pt:pseudoJet1_eta:pseudoJet1_phi:pseudoJet1_mass", "file2_scan03.log");

makeScan("file1.root", "evt:HLT_HT650:HLT_MET150:HLT_ht350met100", "file1_scan04.log");
makeScan("file2.root", "evt:HLT_HT650:HLT_MET150:HLT_ht350met100", "file2_scan04.log");

makeScan("file1.root", "evt:njet:jet_pt:jet_eta:jet_phi:jet_mass:jet_btagCSV:jet_rawPt:jet_mcPt:jet_mcFlavour:jet_area:jet_id:jet_puId", "file1_scan05.log"); //need to add jet_quarkGluonID
makeScan("file2.root", "evt:njet:jet_pt:jet_eta:jet_phi:jet_mass:jet_btagCSV:jet_rawPt:jet_mcPt:jet_mcFlavour:jet_area:jet_id:jet_puId", "file2_scan05.log"); //need to add jet_quarkGluonID

makeScan("file1.root", "evt:nlep:lep_pt:lep_eta:lep_phi:lep_mass:lep_charge:lep_pdgId:lep_dxy:lep_dz:lep_tightId:lep_relIso03:lep_relIso04:lep_lostHits:lep_convVeto:lep_tightCharge", "file1_scan06.log"); //need to add lep_mcMatchId
makeScan("file2.root", "evt:nlep:lep_pt:lep_eta:lep_phi:lep_mass:lep_charge:lep_pdgId:lep_dxy:lep_dz:lep_tightId:lep_relIso03:lep_relIso04:lep_lostHits:lep_convVeto:lep_tightCharge", "file2_scan06.log"); //need to add lep_mcMatchId

makeScan("file1.root", "evt:nisoTrack:isoTrack_pt:isoTrack_eta:isoTrack_phi:isoTrack_mass:isoTrack_dz:isoTrack_pdgId:isoTrack_absIso", "file1_scan07.log"); //need to add isoTrack_mcMatchId
makeScan("file2.root", "evt:nisoTrack:isoTrack_pt:isoTrack_eta:isoTrack_phi:isoTrack_mass:isoTrack_dz:isoTrack_pdgId:isoTrack_absIso", "file2_scan07.log"); //need to add isoTrack_mcMatchId

makeScan("file1.root", "evt:ntau:tau_pt:tau_eta:tau_phi:tau_mass:tau_charge:tau_isoCI3hit:tau_idCI3hit", "file1_scan08.log"); //need to add tau_mcMatchId, tau_dxy, tau_dz
makeScan("file2.root", "evt:ntau:tau_pt:tau_eta:tau_phi:tau_mass:tau_charge:tau_isoCI3hit:tau_idCI3hit", "file2_scan08.log"); //need to add tau_mcMatchId, tau_dxy, tau_dz

makeScan("file1.root", "evt:ngamma:gamma_pt:gamma_eta:gamma_phi:gamma_mass:gamma_chHadIso:gamma_neuHadIso:gamma_phIso:gamma_sigmaIetaIeta:gamma_r9:gamma_hOverE:gamma_idCutBased", "file1_scan09.log"); //need to add gamma_mcMatchId
makeScan("file2.root", "evt:ngamma:gamma_pt:gamma_eta:gamma_phi:gamma_mass:gamma_chHadIso:gamma_neuHadIso:gamma_phIso:gamma_sigmaIetaIeta:gamma_r9:gamma_hOverE:gamma_idCutBased", "file2_scan09.log"); //need to add gamma_mcMatchId

makeScan("file1.root", "evt:ngenPart:genPart_pt:genPart_eta:genPart_phi:genPart_mass:genPart_pdgId:genPart_motherId:genPart_grandmaId", "file1_scan10.log"); //need to add genPart_charge
makeScan("file2.root", "evt:ngenPart:genPart_pt:genPart_eta:genPart_phi:genPart_mass:genPart_pdgId:genPart_motherId:genPart_grandmaId", "file2_scan10.log"); //need to add genPart_charge

}
