Template taken from Unreal Engine "5.4.2 Release".

https://github.com/EpicGames-Mirror-A/UnrealEngine/


操作方法
wasdキー：キャラクター移動
マウス：カメラ移動
マウス左ボタン：射撃、押しっぱなしで連射
マウス右ボタン：押している間、エイムモードにカメラを変更

〇元のThirdPersonからの主な変更点
・プレイヤー
銃を持たせた
銃から弾丸（寿命2秒）が出るようにした（押しっぱなしで連射）
カメラを肩越しの位置にするエイムモードをつけた
エイムモード中の操作に合わせて銃の向きを変えるようにした
エイムモード中は前を向いたまま後や横に歩くようにモーションを変更した
体力を設定し、0になったら、モデルがラグドール化して倒れるようにした
倒れたらレベルをリロードして初期状態に戻すようにした
銃撃時にマズルフラッシュと射撃音をつけた
被弾時にのけぞりモーションを取るようにした

・エネミー
エネミーを10体追加した
エネミーの感知範囲を設定した
StateTreeをつかってAIをつけた
→通常時はランダム移動
→感知範囲に入ると、少し近づいて射撃を行う
→範囲外に入ると通常状態に戻る
モーション、銃撃の性能、体力が尽きると倒れる等はプレイヤーと同じ

〇次にやるべき内容
現状のエネミーを継承元のエネミーベースクラスに改造し、複数種のエネミーに対応する
これが複数人プロジェクトだった場合、複数人で同時に触る可能性が高いプレイヤー、エネミーベースのBPをC++に移行
のけぞり方向を被弾した攻撃のベクトルに合わせる
体力のUIを作る
ゲームを管理するオブジェクトを作成し、レベルに配置（現状クリア判定等、ゲームの進行管理がない）
ゲームスタート、ゲームクリア、ポーズUI作成
弾があたってるように見えてすり抜ける部分が多いので当たり判定を調整
敵のエイムが弱いのを調整
のけぞりモーションがほかのモーションに潰されてほとんど目立たないのを対処