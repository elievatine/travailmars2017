cat $1 | grep -i Bomber | grep -i Nicolas | grep -i - | awk '{print $(NF-1)}'
