#ifndef TREE_H
#define TREE_H
    #include <iostream>
    #include <vector>
    #include "TreeNode.h"
    using namespace std;
    template <typename NODETYPE> class Tree
    {
        public:
            //constructor
            Tree()
            :rootptr(nullptr){    }
            //insert a node in the tree
            void InsertNode(const NODETYPE &value)
            {
                insertNodeHelper(&rootptr,value);
            }
            //begin preorder traversal of tree
            void preorderTraversal()const
            {
                preorderHelper(rootptr);
            }
            //begin inorder traversal of tree
            void inorderTraversal()const
            {
                inorderHelper(rootptr);
            }
            //begin postorder traversal of tree
            void postorderTraversal()const
            {
                postorderHelper(rootptr);
            }
            int WhatIsTheDepthOfTree()
            {
                return WhatIsTheDepthOfTreehelper(&rootptr);
            }
            TreeNode<NODETYPE>* treeSearch(NODETYPE value)
            {
                int deapthwhenfound=0;
                //when we passed parent as "parent" caused the returned value from the 
                //search function to not be written to the local parent variable in 
                //the treesearch function,so we had to pass it as &parent
                //and re define the parent argument as pointer to pointer instead
                //of pointer .This way the value was written to local pointer variable 
                //parent
                TreeNode<NODETYPE> *parent;
                return searchTreeHelper(value,rootptr,&deapthwhenfound,&parent);
            }
            bool deleteNode(NODETYPE value)
            {
                int deapthwhenfound=0;
                TreeNode<NODETYPE> *parent;
                TreeNode<NODETYPE>*pfound=searchTreeHelper(value,rootptr,&deapthwhenfound,&parent);
                if(pfound!=0)
                    return deleteNodeHelper(pfound, value,&parent);
                else
                    return false;
            }

        private:
            TreeNode<NODETYPE> *rootptr;
            void insertNodeHelper(TreeNode <NODETYPE>**ptr,const NODETYPE &value)
            {
                if (*ptr==nullptr)
                *ptr=new TreeNode<NODETYPE>(value);
                else
                {
                    if(value<(*ptr)->data)
                    {
                        insertNodeHelper(&((*ptr)->leftpr),value);
                    }
                    else
                    {
                        if(value>= ((*ptr)->data))
                        {
                         insertNodeHelper(&((*ptr)->rightptr),value);
                        }
                        // else
                        // {
                        //  cout<<value<<"dub"<<endl;
                        // }
                    }
                }
            }


            void preorderHelper(TreeNode<NODETYPE>*ptr)const
            {
                //a very clever way to use recursion
                //keep going to display each left node till you find null
                //then go back to the original call and do the same for the right nodes
                if(ptr!=nullptr)
                {
                    cout<<ptr->data<<' ';
                    preorderHelper(ptr->leftpr);
                    preorderHelper(ptr->rightptr);
                }
            }
            void inorderHelper(TreeNode<NODETYPE>*ptr)const
            {
                if(ptr!=nullptr)
                {
                    inorderHelper(ptr->leftpr);
                    cout<<ptr->data<<' ';
                    inorderHelper(ptr->rightptr);
                }
            }
            void postorderHelper(TreeNode <NODETYPE>*ptr)const
            {
                if(ptr != nullptr)
                {
                    postorderHelper(ptr->leftpr);
                    postorderHelper(ptr->rightptr);
                    cout<<ptr->data<<' ';
                }
            }
            int WhatIsTheDepthOfTreehelper(TreeNode <NODETYPE>**ptr)
            {
                //the function will keep recursing untill it reaches nullptr
                //then it will return max between left and right which will be in the 
                //depest stack call =0 but the return has 1+ 
                //so it will keep returning 1+1+1+ untill it reaches the 
                //original left+= call and add all the 1+1+... to it
                //and then do the same for the right+= call 
                //then do a final max between the left and right to return the depth of the tree
                //the function will cover the depest point because it will keep going untill 
                //it reeaches a node that doesn't point to anything
                int left=0;
                int right=0;
                if(*ptr!=nullptr)
                {
                    if((*ptr)->leftpr!=nullptr && ((*ptr)->rightptr)==nullptr)
                    {
                        return (1+ WhatIsTheDepthOfTreehelper(&(*ptr)->leftpr));
                    }
                    else if (((*ptr)->rightptr)!=nullptr && (*ptr)->leftpr==nullptr)
                    {
                        return (1+ WhatIsTheDepthOfTreehelper(&(*ptr)->rightptr));
                    }
                    else if(((*ptr)->rightptr)!=nullptr  && ((*ptr)->leftpr)!=nullptr )
                    {
                        left+=(1+ WhatIsTheDepthOfTreehelper(&(*ptr)->leftpr));
                        right+=(1+ WhatIsTheDepthOfTreehelper(&(*ptr)->rightptr));
                    }
                }
                return max(left,right);
            }
            TreeNode<NODETYPE>* searchTreeHelper(NODETYPE value,TreeNode<NODETYPE> *rootptr,int *currentdepthargu,TreeNode<NODETYPE>**parentnodeptr)
            {
                TreeNode<NODETYPE>* CurrentNode=rootptr ;
                bool Found=false;
                int currentdepth=0;
                int maximumdepth=WhatIsTheDepthOfTreehelper(&rootptr);
                while(maximumdepth>=currentdepth && !Found)
                {
                    if(CurrentNode->data==value)
                    {
                        Found=true;
                    }
                    else if(CurrentNode->data>value)
                    {
                        *parentnodeptr=CurrentNode;
                        CurrentNode=CurrentNode->leftpr;
                    }
                    else
                    {
                        *parentnodeptr=CurrentNode;
                        CurrentNode=CurrentNode->rightptr;
                    }
                    currentdepth++;
                }
                *currentdepthargu=currentdepth;
                if(!Found)
                {
                    return nullptr;
                }
                else
                    return CurrentNode;
            }
            bool deleteNodeHelper(TreeNode<NODETYPE> *deleteptr,NODETYPE value,TreeNode<NODETYPE>**parentnodeptr)
            {
                TreeNode<NODETYPE>* CurrentNode=rootptr ;
                TreeNode<NODETYPE>* replacementparent=nullptr ;
                TreeNode<NODETYPE>* Temp=nullptr ;
                bool atfirstlevel=true;
                 //case 1->item to be deleted if leafnode,the leaf is deleted and the pointer in the parent 
                 //node is set to nullptr
                 if(deleteptr->leftpr==nullptr && deleteptr->rightptr==nullptr)
                 {
                    if((*parentnodeptr)->leftpr==deleteptr)//null the node only pointing to the value to be deleted
                    {
                        (*parentnodeptr)->leftpr=nullptr;
                    }
                    else if((*parentnodeptr)->rightptr==deleteptr)//null the node only pointing to the value to be deleted
                    {
                        (*parentnodeptr)->rightptr=nullptr;
                    }
                    deleteptr->data=0;
                 }
                 //case 2->the item to be deletd is in a node with one child,the pointer in the parent
                 //is set to point to the child and the item to be deleted is deleted
                if(deleteptr->leftpr==nullptr && deleteptr->rightptr!=nullptr)//I have one child
                 {
                    if((*parentnodeptr)->rightptr==deleteptr)//null the node only pointing to the value to be deleted
                    {
                        (*parentnodeptr)->rightptr=deleteptr->rightptr;//child of the deleted node point to the parent
                    }
                    else if((*parentnodeptr)->leftpr==deleteptr)//null the node only pointing to the value to be deleted
                    {
                        (*parentnodeptr)->leftpr=deleteptr->rightptr;//child of the deleted node point to the parent
                    }
                    //delete the desired node after allocating the child to parent
                    deleteptr->data=0;
                    deleteptr->leftpr=nullptr;
                    deleteptr->rightptr=nullptr;
                 }
                else if(deleteptr->rightptr==nullptr && deleteptr->leftpr!=nullptr)//I have one child
                {
                    if((*parentnodeptr)->rightptr==deleteptr)//null the node only pointing to the value to be deleted
                    {
                        (*parentnodeptr)->rightptr=deleteptr->leftpr;//child of the deleted node point to the parent
                    }
                    else if((*parentnodeptr)->leftpr==deleteptr)//null the node only pointing to the value to be deleted
                    {
                        (*parentnodeptr)->leftpr=deleteptr->leftpr;//child of the deleted node point to the parent
                    }
                    //delete the desired node after allocating the child to parent
                    deleteptr->data=0;
                    deleteptr->leftpr=nullptr;
                    deleteptr->rightptr=nullptr;
                }
                //case 3->the item to be deleted has 2 children ,so another node must take its place
                    if(deleteptr->leftpr!=nullptr && deleteptr->rightptr!=nullptr)//I have 2 children
                    {
                    //assign the children to the largest smaller value after the one being deleted
                        //found at left subtree of the parent at the rightmost node
                            //go from parent node's left subtree
                            CurrentNode=deleteptr;
                            replacementparent=deleteptr;
                            CurrentNode=CurrentNode->leftpr;
                            //go from left subtree to rigth untill right==nullptr
                            while(CurrentNode->rightptr!=nullptr)
                            {
                                atfirstlevel=false;
                                replacementparent=CurrentNode;
                                CurrentNode=CurrentNode->rightptr;
                            }
                            //if that rightmost node is a leaf then follow algor.
                            if(CurrentNode->rightptr==nullptr && CurrentNode->leftpr==nullptr)
                            {
                                if((*parentnodeptr)->rightptr==deleteptr)
                                {
                                    //store the pointer to the node to be deleted in a temp variable
                                    Temp=(*parentnodeptr)->rightptr;
                                    //move the replacement node to the parent node to replace the node
                                    //to be deleted
                                    (*parentnodeptr)->rightptr=CurrentNode;
                                    //clear the parent of the replacement node
                                    if(atfirstlevel)
                                    {
                                        replacementparent->leftpr=nullptr;
                                    }
                                    else
                                    {   
                                        replacementparent->rightptr=nullptr;
                                    }
                                    (*parentnodeptr)->rightptr->leftpr=Temp->leftpr;
                                    (*parentnodeptr)->rightptr->rightptr=Temp->rightptr;    
                                }
                                else if((*parentnodeptr)->leftpr==deleteptr)
                                {
                                    Temp=(*parentnodeptr)->leftpr;
                                    (*parentnodeptr)->leftpr=CurrentNode;
                                    if(atfirstlevel)
                                    {
                                        replacementparent->leftpr=nullptr;
                                    }
                                    else
                                    {
                                        replacementparent->rightptr=nullptr;
                                    }
                                    (*parentnodeptr)->rightptr->leftpr=Temp->leftpr;
                                    (*parentnodeptr)->rightptr->rightptr=Temp->rightptr;
                                }
                                Temp->leftpr=nullptr;
                                Temp->rightptr=nullptr;
                            }
                            //if that rightmost node already has a left child then follow algor.
                            else if(CurrentNode->rightptr==nullptr && CurrentNode->leftpr!=nullptr)
                            {
                                if((*parentnodeptr)->rightptr==deleteptr)
                                {
                                    //store the pointer to the node to be deleted in a temp variable
                                    Temp=(*parentnodeptr)->rightptr;
                                    //move the replacement node to the parent node to replace the node
                                    //to be deleted
                                    (*parentnodeptr)->rightptr=CurrentNode;
                                    //clear the parent of the replacement node
                                    //move the child to the replacment node's left ( where it was before the movment of its parent)
                                    (*parentnodeptr)->rightptr->leftpr=CurrentNode->leftpr;
                                    if(atfirstlevel)
                                    {
                                        replacementparent->leftpr=nullptr;
                                    }
                                    else
                                    {
                                        replacementparent->rightptr=nullptr;
                                    }
                                    (*parentnodeptr)->rightptr->rightptr=Temp->rightptr;    
                                }
                                else if((*parentnodeptr)->leftpr==deleteptr)
                                {
                                    Temp=(*parentnodeptr)->leftpr;
                                    (*parentnodeptr)->leftpr=CurrentNode;
                                    (*parentnodeptr)->leftpr->leftpr=CurrentNode->leftpr;
                                    if(atfirstlevel)
                                    {
                                        replacementparent->leftpr=nullptr;
                                    }
                                    else
                                    {
                                        replacementparent->rightptr=nullptr;
                                    }
                                    (*parentnodeptr)->rightptr->rightptr=Temp->rightptr;
                                }
                                Temp->leftpr=nullptr;
                                Temp->rightptr=nullptr;
                            }
                    }
                 return 0;
            }
    };
#endif