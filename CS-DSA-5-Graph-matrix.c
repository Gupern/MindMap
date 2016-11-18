#define MaxVertexNum 100  //顶点数目的最大值
typedef char VertexType;  //顶点的数据类型
typedef int EdgeType;     //带权图中边上权值的数据类型; 可定义0/1的枚举类型
// 无向图的邻接矩阵是对称矩阵,可压缩存储
// 空间复杂度为O(n^2),n为图的顶点数|V|
typedef struct{
    VertexType Vex[MaxVertexNum];  //顶点表 -- 一维数组
    EdgeType Edge[MaxVertexNum] [MaxVertexNum]; //邻接矩阵,边表 -- 简单应用中,可直接用二维数组
    int vexnum, arcnum;                         //图的当前顶点数和弧数
}MGragh;

