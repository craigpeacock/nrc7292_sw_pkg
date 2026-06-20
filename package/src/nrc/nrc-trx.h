#ifndef _NRC_TRX_H_
#define _NRC_TRX_H_

bool nrc_is_valid_vif (struct nrc *nw, struct ieee80211_vif *vif);
bool ieee80211_is_data_data(__le16 fc);
void insert_qos_ctrl_field_in_skb(struct sk_buff *skb, unsigned int hdr_len);

#endif