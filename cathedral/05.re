= バラがバラでないのは？

　リーヌスの行動を研究して、それが成功している理由について理論ができたので、この理論を自分の（確かにずっと単純で小規模な）プロジェクトで試してみようとぼくは意識的に決めた。

　でも、まずやったのは popclient を再構成してすごく単純化することだった。Carl Harrisの実装はすごくしっかりしていたけれど、Cのプログラマにありがちな、無用な複雑さが見られた。かれはコードを中心に考えていて、データ構造はコードのサポートとして扱っていた。結果として、コードは美しかったけれど、データ構造のデザインはいきあたりばったりで、いささか醜かった（少なくともこの老いぼれ LISPハッカーの高い基準で見れば）。

　でも、書き直しをやったのは、コードやデータ構造の設計を改善する以外にも目的があった。それは、このソフトを進歩させて、自分が完全に理解してるものにすることだった。自分でもわかってないプログラムのバグをなおす責任をしょいこむなんて、おもしろくもないからね。

　そして最初の 1 ヶ月かそこらは、単に Carl の基本的な設計の考え方を追いかけてただけだった。ぼくが加えた最初の大きな変更は、IMAPのサポートを加えることだった。これは、プロトコルマシンを、汎用ドライバとメソッドテーブル 3 つ（POP2、POP3、IMAP用）に再構成することで実現した。これと、その前の変更は、プログラマとして頭にいれておくといい一般原則を示すものだ。特に、ダイナミックなタイプ処理をしない C みたいな言語では：

9. 賢いデータ構造と間抜けなコードのほうが、その逆よりずっとまし。

　またもやフレッド・ブルックス本の第 11 章から。「コードだけ見せてくれてデータ構造は見せてもらえなかったら、わたしはわけがわからぬままだろう。データ構造さえ見せてもらえれば、コードのほうはたぶんいらない。見るまでもなく明らかだから」

　ほんとはかれが言ったのは「フローチャート」に「テーブル」だった。でも 30 年にわたる用語面・文化面での推移を考慮すれば、ほとんど同じことを言ってる。

　この時点（1996 年 9 月頭、ゼロ時点から約 6 週間後）で、ぼくはそろそろ名前の変え時かな、と考え出した。なんといっても、もう POPクライアントだけじゃなくなってたんだし。でも、ためらった。いまのところ、まだこのソフトにはまったく新しい部分が何もなかったからだ。ぼく版のpopclient は、まだ独自のアイデンティティを確立するにいたってなかった。

　これが派手に変わったのは、fetchmail がとってきたメールを SMTPポートに転送する方法を身につけたときだった。この話はまたあとで。それよりまず：上で、このプロジェクトを使って、リーヌス・トーヴァルズがうまくやった点についての自分の理論を試すことにした、と書いた。試すって、どういうふうに？（という疑問は当然起こるだろう）。それは以下の通り：

* はやめしょっちゅうのリリースを心がけた（間が 10 日以上開いたことはほとんどない。集中して開発しているときは、1 日 1 回）。
* だれかが fetchmail の件で連絡してきたら、その人をベータリストに加えてリストを増やした。
* リリースごとに騒々しいアナウンスをベータリストに送りつけて、みんなに参加をうながした。
* そしてベータテスタたちの言うことをきいて、設計上の判断について意見を求め、パッチやフィードバックを送ってくれたら必ずほめた。

　こういう単純な方法の見返りはすぐにやってきた。プロジェクトの始めから、ぼくは他の開発者なら死んでもいいと思うような質の高いバグレポートをもらったし、しかもそれになかなかいいフィックスまでついてきた。よく考えられたコメントももらったし、ファンレターもきたし、賢い機能の提案ももらった。これでわかるのが：

10. ベータテスタをすごく大事な資源であるかのように扱えば、向こうも実際に大事な資源となることで報いてくれる。

　Fetchmail の成功をはかるおもしろい指標としては、このプロジェクトのベータリスト―― fetchmail 友の会――のサイズを見るといい。執筆時点では 249 人で、毎週2、3人追加されている。

　実は、1997 年 5月に改訂している時点だと、このリストは人数が減りはじめてる。その理由がおもしろい。何人かがリストから外してくれといってきたんだけれど、それはfetchmailがかれらにはまったく文句なしに機能しているので、メーリングリストのトラフィックを見る必要がないと言うんだ。成熟したバザール形式のライフサイクルでは、これが自然なのかも知れない。
