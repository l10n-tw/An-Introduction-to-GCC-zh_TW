# 2.8 使用函式庫的 header 檔案
## 常見問題與解答
### 為何沒有加上 -lm 參數編譯沒有發生錯誤？
比較新的 GCC 版本預設會用自己內建的 pow 函式取代掉 libm 的 pow 函式呼叫來對程式作最佳化(optimization)，故實際上沒有用到 libm 函式庫所以編譯沒發生錯誤。
在編譯命令中加上 -fno-builtin 參數可以強迫 GCC 關閉此功能以避免此問題
參閱[第 2.7 章編譯無出現 undefined reference 錯誤與說明不符 · Issue #1 · Vdragon/gccintro_code_zh_TW_translation](https://github.com/Vdragon/gccintro_code_zh_TW_translation/issues/1)

感謝 @legnaleurc 協助解決問題