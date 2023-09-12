import sys

systs = ["Nominal"]
if len(sys.argv) > 1:
    systs = ["Nominal", "JESUp", "JESDn", "JERUp", "JERDn", "JMSUp", "JMSDn", "JMRUp", "JMRDn", "prefireWgtUp", "prefireWgtDn", "trigWgtUp", "trigWgtDn", "puWgtUp", "puWgtDn"]
