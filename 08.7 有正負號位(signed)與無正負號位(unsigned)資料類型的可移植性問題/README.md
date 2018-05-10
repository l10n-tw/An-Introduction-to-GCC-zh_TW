# 8.7 有正負號位(signed)與無正負號位(unsigned)資料類型的可移植性問題/
## 已知問題<br />Known issues
### 在 4.8.2 版本的 GCC 中執行 `gcc -Wall -fsigned-char signed.c` 命令不會輸出警告訊息
再加上 `-W` 命令參數即可
`````
% gcc -Wall -W -fsigned-char signed.c 
signed.c: In function ‘main’:
signed.c:7:3: warning: comparison is always false due to limited range of data type [-Wtype-limits]
   if (c > 128) {
   ^
`````