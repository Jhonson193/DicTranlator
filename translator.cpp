﻿#include "Translator.h"

#if _MSC_VER >=1600    // MSVC2015>1899,对于MSVC2010以上版本都可以使用
#pragma execution_character_set("utf-8")
#endif
Translator::Translator(){

}
Translator::Translator(const QString &qerry)
    :qstr(qerry)
{
    q = qstr.toStdString();
    index = 0;
}

void Translator::SetQstr(const QString &qstring){
    qstr = qstring;
    q = qstr.toStdString();

}
void Translator::SetIndex(const int& in){
    index = in;
}
QString Translator::GetUrl(){
    //制作签名
    myurl = "https://fanyi-api.baidu.com/api/trans/vip/translate?";
    appid = "20220425001189578";  //你的appid
    from = "auto";
    to = lan[index];  //选择目标语种
    time_t myt = time(NULL);  //获取时间戳
    salt = to_string(myt);
    secret_key = "AfH25KvcKm9v4DOZtsDU";  //你的密钥
    sign = "";
    //签名拼接
    sign.append(appid);
    sign.append(q);
    sign.append(salt);
    sign.append(secret_key);

    //签名MD5加密
    MD5 md5 = MD5(sign);
    sign = md5.outstr(32).c_str();

    //制作url
    myurl.append("&q=");
    myurl.append(q);
    myurl.append("&from=");
    myurl.append(from);
    myurl.append("&to=");
    myurl.append(to);
    myurl.append("&appid=");
    myurl.append(appid);
    myurl.append("&salt=");
    myurl.append(salt);
    myurl.append("&sign=");
    myurl.append(sign);
    //string转Qstring
    url=QString::fromStdString(myurl);
    return url;
}
