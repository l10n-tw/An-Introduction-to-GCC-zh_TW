# 9.4 中止一個處於無限迴圈中的程式/
## 已知問題<br />Known issues
### 為何在 Ubuntu 或以 Ubuntu 為基礎的作業系統散佈版本中使用 gdb attach 會出現「ptrace: 此項操作並不被允許.」錯誤？
Ubuntu 10.10 及其更新版本引進了一個[保護機制](https://wiki.ubuntu.com/SecurityTeam/Roadmap/KernelHardening#ptrace_Protection)使得非 root 使用者無法 attach 至非子 process 的任意 process，解決方法有：

* 改直接以 gdb （或其他有偵錯功能的整合式開發環境(IDE)）執行該程式進行偵錯
* 以 root 身份執行 gdb
* 以 root 身份暫時關掉此功能

以 root 身份在終端機內執行下列命令
`````
# sysctl kernel.yama.ptrace_scope=0
`````
如果沒有以 root 身份執行命令的權限請聯絡您的系統管理員處理，在您使用 attach 完後請連繫您的系統管理員將此功能重新開啟
`````
# sysctl kernel.yama.ptrace_scope=1
`````
* 以 root 身份永遠關掉此功能（不建議採用）
	* 以 root 身份編輯 /etc/sysctl.d/10-ptrace.conf 設定檔，將 kernel.yama.ptrace_scope 的設定值改為 0