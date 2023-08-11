echo ${1} > version.txt
echo "running version ${1}..."
python3 write_datacard.py
sh combine_cards.sh
sh create_workspace.sh
sh run_combine.sh
sh plot.sh
echo "finding cW limit..."
python3 find_cW_limit.py
