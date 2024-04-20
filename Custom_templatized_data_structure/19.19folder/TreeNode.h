#ifndef TREENODE_H
#define TREENODE_H

    template<typename NODETYPE> class Tree;

    template<typename NODETYPE>
    class TreeNode
    {
    
    friend class Tree <NODETYPE>;
        


    public:
    
        TreeNode(const NODETYPE &d)
        :leftpr(nullptr),data(d),rightptr(nullptr)
        {

        }
        ~TreeNode();

        NODETYPE getData()const
        {
            return data;
        }

    private:
        TreeNode<NODETYPE> *leftpr;
        NODETYPE data;
        TreeNode<NODETYPE> *rightptr;
    };
    



#endif