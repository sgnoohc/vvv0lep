./bin/run.py ${1}
./bin/merge.py
# ./bin/abcd.py
# ./bin/plot_closure.py
./bin/plot.py
cp plots/ZL/VVV0TreeV12/dim6/abcd/ZL3FJA__SR1SumPtFJ.txt QCDScale${1}.txt
cp plots/ZL/VVV0TreeV12/dim6/abcd/ZL2FJA__HTFJ_binned.txt QCDScale${1}_2FJ.txt
python3 rooutil/python/yield_for_keynote3.py QCDScale${1}_2FJ.txt > QCDScale${1}_2FJ.csv
# python3 read_closure_syst.py plots/ZL/VVV0TreeV12/dim6/closure/ZL2FJA__HTFJ_binned.txt > plots/ZL/VVV0TreeV12/dim6/closure/ZL2FJA__HTFJ_binned_syst.csv
# python3 read_closure_syst.py plots/ZL/VVV0TreeV12/dim6/closure/ZL3FJA__SR1SumPtFJ.txt > plots/ZL/VVV0TreeV12/dim6/closure/ZL3FJA__SR1SumPtFJ_syst.csv
# ./bin/scan.py
# ./bin/write_stat.py
