1.新建指令檔案 new_service.sh
#! /bin/bash
#command content
exit 0

2.設定許可權
sudo chomod +x new_service.sh

3.
sudo mv new_service.sh /etc/init.d // 啟動程式位置

4. 
cd /etc/init.d
sudo update-rc.d new_service.sh defaults 90 // 權限開啟順序

5. 檢視全部服務
sudo service --status-all

6. 
sudo service status 
sudo service start
sudo service stop
sudo service restart
