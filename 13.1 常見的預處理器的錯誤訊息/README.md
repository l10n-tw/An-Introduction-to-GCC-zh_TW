# 13.1 預處理器的錯誤訊息/
## 已知問題<br />Known issues
### 在 GCC 4.8.2 中未出現「invalid preprocessing directive #...」錯誤訊息
估計是新版本的預處理器直接把未知的預處理器命令改無視了所以沒發生此錯誤

### 在 Ubuntu 14.04 環境中未出現「warning: This file includes at least one deprecated or antiquated header.」錯誤訊息（fatal error: iostream.h: 沒有此一檔案或目錄）
估計是這個 header 檔案的舊式名稱已經被淘汰掉了，所以找不到檔案
