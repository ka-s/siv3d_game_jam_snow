//
// Result.h
//

#pragma once

// リザルトシーンクラス
class Result : public Scene
{
private:

public:
    Result();
    ~Result();

    // 更新
    void update(eScene* _next_scene) override;
    // 描画
    void draw() override;
};
