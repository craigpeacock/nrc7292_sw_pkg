#ifndef _HIF_H_
#define _HIF_H_

bool is_tcp_ack(struct sk_buff *skb);
bool is_mgmt(struct sk_buff *skb);
bool is_urgent_frame(struct sk_buff *skb);
int nrc_xmit_wim(struct nrc *nw, struct sk_buff *skb, enum HIF_SUBTYPE stype);
int nrc_hif_reset_rx (struct nrc_hif_device *dev);

#endif