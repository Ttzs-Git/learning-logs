from pathlib import Path

## 打开文件+转化成行
path=Path('pi_million_digits.txt')
lines=path.read_text().splitlines()
line2=''
for line in lines:
    line2+=line.strip()
if '000000' in line2:
    print(f'Yes')
else:
    print(f'No')